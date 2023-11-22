#pragma once
#ifndef _COINITIALIZER_H
#define _COINITIALIZER_H

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

#endif // _COINITIALIZER_H
