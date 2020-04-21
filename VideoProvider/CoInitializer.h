#pragma once
#ifndef _COINITIALIZER_H__
#define _COINITIALIZER_H__

class CCoInitializer
{

private:
	bool m_isInitialized;

public:
	CCoInitializer(void);
	~CCoInitializer(void);

private:
	CCoInitializer( const CCoInitializer& );
	CCoInitializer& operator = ( const CCoInitializer& );
};

#endif // _COINITIALIZER_H__