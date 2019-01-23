
// system libs
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// math libs
#include <vector>
#include <list>
#include <limits>
#include <algorithm>
#include <functional>
#include <numeric>

//  wx
#include "wx/wxprec.h"
#include "wx/thread.h"
//precompiled headers
#ifndef  WX_PRECOMP
  #include "wx/wx.h"
#endif 
#include <wx/regex.h>
#include <wx/string.h>

// local headers
#include "sky.h"
#include "catalog_stars.h"
#include "../util/func.h"
#include "../unimap_worker.h"
#include "vizier.h"
#include "nofs_navy_mil.h"

// main header
#include "catalog_stars_usnob.h"

/////////////////////////////////////////////////////////////////////
// Method:	Constructor
// Class:	CSkyCatalogStarsUsnob
// Purpose:	intialize my object
// Input:	nothing
// Output:	nothing
/////////////////////////////////////////////////////////////////////
CSkyCatalogStarsUsnob::CSkyCatalogStarsUsnob( CSkyCatalogStars* pCatalogStars, CUnimapWorker* pWorker )
{
	m_pCatalogStars = pCatalogStars;
	m_pUnimapWorker = pWorker;

	// set my stuff
	m_pCatalogStars->m_strFile = wxT("");
	m_pCatalogStars->m_strName = wxT("USNO-B1.0");
	m_pCatalogStars->m_strLabel = wxT("USNOB");
	m_pCatalogStars->m_nCatalogLoaded = CATALOG_ID_USNO_B1;
	m_pCatalogStars->m_nObjectType = CAT_OBJECT_TYPE_USNO;
}

/////////////////////////////////////////////////////////////////////
// Method:	Destructor
// Class:	CSkyCatalogStarsUsnob
// Purpose:	destroy/delete my object
// Input:	nothing
// Output:	nothing
/////////////////////////////////////////////////////////////////////
CSkyCatalogStarsUsnob::~CSkyCatalogStarsUsnob( )
{

}

/////////////////////////////////////////////////////////////////////
// Method:	Load
// Class:	CSkyCatalogStarsUsnob
// Purpose:	load the binary version of the catalog to increase speed
// Input:	nothing
// Output:	nothing
/////////////////////////////////////////////////////////////////////
unsigned long CSkyCatalogStarsUsnob::Load( int nLoadType, int nLoadSource, int nLoadLimit,
										int bRegion, double nRa, double nDec,
										double nWidth, double nHeight )
{
	unsigned long nCount = 0;

	if( nLoadSource == CATALOG_QUERY_SOURCE_VIZIER )
	{
		CVizier oRemote( m_pCatalogStars, m_pUnimapWorker );
		nCount = oRemote.GetStarsFromVizier( CATALOG_ID_USNO_B1, bRegion, nRa, nDec, nWidth, nHeight );

	} else if( nLoadSource == CATALOG_QUERY_SOURCE_NOFS_NAVY_MIL )
	{
		CNofsNavyMil oRemote( m_pCatalogStars, m_pUnimapWorker );
		nCount = oRemote.GetUSNOB1StarsFromNavyMil( nRa, nDec, nWidth, nHeight );
	}

	return( nCount );
}

/////////////////////////////////////////////////////////////////////
// Method:	LoadBinary
// Class:	CSkyCatalogStarsUsnob
// Purpose:	load the binary version of the catalog to increase speed
// Input:	nothing
// Output:	nothing
/////////////////////////////////////////////////////////////////////
unsigned long CSkyCatalogStarsUsnob::LoadBinary( const wxString& strFile, int nLoadLimit,
								int bRegion, double nRa, double nDec,
										double nWidth, double nHeight )
{
	FILE* pFile = NULL;
	wxString strLog;
	// radius
	double nFetchRadius = 180.0;

	// calculate min/max
/*	double nMinRa = nRa-nWidth/2;
	double nMaxRa = nRa+nWidth/2;
	double nMinDec = nDec-nHeight/2;
	double nMaxDec = nDec+nHeight/2;
*/

	// init min and max
	double nMinX = DBL_MAX;
	double nMinY = DBL_MAX;
	double nMaxX = DBL_MIN;
	double nMaxY = DBL_MIN;

	// get pointer data from remote
	StarDefCatBasic* vectStar = m_pCatalogStars->m_vectStar;
	unsigned long nStar = 0;

	if( bRegion )
	{
		strLog.Printf( wxT("INFO :: loading USNOB1.0 area orig(%.2f,%.2f) size(%.2f,%.2f)..."),
							nRa, nDec, nWidth, nHeight );
		m_pUnimapWorker->Log( strLog );
		// calculate radius 
		nFetchRadius = (double) ( (double) sqrt( (double) nWidth*nWidth + (double) nHeight*nHeight )/2 );

	} else
	{
		m_pUnimapWorker->Log( wxT("INFO :: loading the entire USNOB1.0 catalog ...") );
	}

	// open file to write
	pFile = wxFopen( strFile, wxT("rb") );
	if( !pFile )
	{
		return( 0 );
	}

	// do the initial allocation
	if( vectStar != NULL ) m_pCatalogStars->UnloadCatalog();

	// check if limit
	if( nLoadLimit > 0 )
	{
		// allocate my vector + 1 unit just to be sure
		vectStar = (StarDefCatBasic*) malloc( (nLoadLimit+1)*sizeof(StarDefCatBasic) );
		// also set load limit just in case
		m_pCatalogStars->m_nStarAllocated = nLoadLimit;

	} else
	{
		// if I am in a region
		if( bRegion )
		{
			m_pCatalogStars->m_nStarAllocated = 300;

			// allocate my vector + 1 unit just to be sure
			vectStar = (StarDefCatBasic*) malloc( (m_pCatalogStars->m_nStarAllocated+1)*sizeof(StarDefCatBasic) );

		} else
		{
			// now go at the end of the file and see the size
			fseek( pFile, 0, SEEK_END );
			// get the file size and calculate how many elements i have
			int nRecords = (int) ( ftell( pFile )/( sizeof(unsigned long)+3*sizeof(double) ));
			// allocate my vector + 1 unit just to be sure
			vectStar = (StarDefCatBasic*) malloc( (nRecords+1)*sizeof(StarDefCatBasic) );
			// go at the begining of the file
			fseek( pFile, 0, SEEK_SET );
			// and also set load limit
			m_pCatalogStars->m_nStarAllocated = nRecords+1;
		}
	}
	////////////////////
	// now write all stars info in binary format
	while( !feof( pFile ) )
	{
		// first reset current record
		memset( &(vectStar[nStar]), 0, sizeof(StarDefCatBasic) );

		if( !fread( (void*) &(vectStar[nStar].cat_no), sizeof(unsigned long), 1, pFile ) )
			break;
		if( !fread( (void*) &(vectStar[nStar].zone_no), sizeof(unsigned int), 1, pFile ) )
			break;
		if( !fread( (void*) &(vectStar[nStar].comp_no), sizeof(unsigned char), 1, pFile ) )
			break;
		if( !fread( (void*) &(vectStar[nStar].cat_type), sizeof(unsigned char), 1, pFile ) )
			break;
		if( !fread( (void*) &(vectStar[nStar].ra), sizeof(double), 1, pFile ) )
			break;
		if( !fread( (void*) &(vectStar[nStar].dec), sizeof(double), 1, pFile ) )
			break;
		if( !fread( (void*) &(vectStar[nStar].mag), sizeof(double), 1, pFile ) )
			break;

/*		if( bRegion && !(m_vectStar[m_nStar].ra <= nMaxRa &&
						m_vectStar[m_nStar].ra >= nMinRa &&
						m_vectStar[m_nStar].dec <= nMaxDec &&
						m_vectStar[m_nStar].dec >= nMinDec) )
*/
		if( bRegion && CalcSkyDistance( nRa, nDec, 
			vectStar[nStar].ra, vectStar[nStar].dec ) > nFetchRadius )
		{
			// skip - don't add this star as is not in the region
			continue;
		}

/*		// calculate min and max --- ???? do i need or just delete ?!!!!
		if( m_vectStar[m_nStar].ra < m_nMinX ) m_nMinX = m_vectStar[m_nStar].ra;
		if( m_vectStar[m_nStar].ra > m_nMaxX ) m_nMaxX = m_vectStar[m_nStar].ra;

		if( m_vectStar[m_nStar].dec < m_nMinY ) m_nMinY = m_vectStar[m_nStar].dec;
		if( m_vectStar[m_nStar].dec > m_nMaxY ) m_nMaxY = m_vectStar[m_nStar].dec;
*/
		// increment counter
		nStar++;


		// check if i am over the load limit
		if( nLoadLimit > 0 && nStar >= nLoadLimit ) break;

		// check if I need to reallocate
		if( nStar >= m_pCatalogStars->m_nStarAllocated )
		{
			// incremen counter
			m_pCatalogStars->m_nStarAllocated += VECT_STARS_START_MEM_ALLOC_BLOCK_SIZE;
			// reallocate
			vectStar = (StarDefCatBasic*) realloc( vectStar, (m_pCatalogStars->m_nStarAllocated+1)*sizeof(StarDefCatBasic) );
		}
	}

	fclose( pFile );

	// set min/max
	m_pCatalogStars->m_nMinX = nMinX;
	m_pCatalogStars->m_nMinY = nMinY;
	m_pCatalogStars->m_nMaxX = nMaxX;
	m_pCatalogStars->m_nMaxY = nMaxY;

	// set pointer data to
	m_pCatalogStars->m_vectStar = vectStar;
	m_pCatalogStars->m_nStar = nStar;

	m_pCatalogStars->m_nCatalogLoaded = CATALOG_ID_USNO_B1;

	// log message
	if( m_pUnimapWorker )
	{
		strLog.Printf( wxT("INFO :: loaded %d stars from USNOB1.0"), nStar );
		m_pUnimapWorker->Log( strLog );
	}

	return( nStar );
}

/////////////////////////////////////////////////////////////////////
// Method:	ExportBinary
// Class:	CSkyCatalogStarsUsnob
// Purpose:	export current catalog as binary
// Input:	nothing
// Output:	nothing
/////////////////////////////////////////////////////////////////////
int CSkyCatalogStarsUsnob::ExportBinary( const wxString& strFile )
{
	FILE* pFile = NULL;
	unsigned long i = 0;

	// open file to write
	pFile = wxFopen( strFile, wxT("wb") );
	if( !pFile )
	{
		return( 0 );
	}
	// now write all stars info in binary format
	for( i=0; i<m_pCatalogStars->m_nStar; i++ )
	{
		// first check to see if my object has the right type
		if( m_pCatalogStars->m_vectStar[i].cat_type == CAT_OBJECT_TYPE_TYCHO )
		{
			if( !fwrite( (void*) &(m_pCatalogStars->m_vectStar[i].cat_no), sizeof(unsigned long), 1, pFile ) )
				break;
			if( !fwrite( (void*) &(m_pCatalogStars->m_vectStar[i].zone_no), sizeof(unsigned int), 1, pFile ) )
				break;
			if( !fwrite( (void*) &(m_pCatalogStars->m_vectStar[i].comp_no), sizeof(unsigned char), 1, pFile ) )
				break;
			if( !fwrite( (void*) &(m_pCatalogStars->m_vectStar[i].cat_type), sizeof(unsigned char), 1, pFile ) )
				break;
			if( !fwrite( (void*) &(m_pCatalogStars->m_vectStar[i].ra), sizeof(double), 1, pFile ) )
				break;
			if( !fwrite( (void*) &(m_pCatalogStars->m_vectStar[i].dec), sizeof(double), 1, pFile ) )
				break;
			if( !fwrite( (void*) &(m_pCatalogStars->m_vectStar[i].mag), sizeof(double), 1, pFile ) )
				break;
		}
	}

	fclose( pFile );

	return( 1 );
}

