
#ifndef _CATALOG_DSO_PGC_H
#define _CATALOG_DSO_PGC_H

class CSkyCatalogDso;
class CUnimapWorker;

class CSkyCatalogDsoPgc
{
// methods:
public:
	CSkyCatalogDsoPgc( CSkyCatalogDso* pCatalogDso, CUnimapWorker* pWorker=NULL );
	~CSkyCatalogDsoPgc( );

	/////////////////////////////////////
	// PGC galaxy catalog methods
	unsigned long Load( int nLoadType=0, int nLoadSource=0, int nLoadLimit=0, int bRegion=0, double nRa=0.0, double nDec=0.0, double nRadius=0.0 );
	long LoadPGCAscii( const wxString& strFile );

//////////////////////////
// DATA
public:
	CSkyCatalogDso* m_pCatalogDso;
	CUnimapWorker* m_pUnimapWorker;
};

#endif
