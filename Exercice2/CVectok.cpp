#include "CVectok.h"
#include <stdlib.h>

CVectok::CVectok(CVectok& v) : CVect(v)
{
	int i;
	for (i = 0; i < nElem; i++) 
	{
		pAdr[i] = v.pAdr[i];
	}
}

CVectok& CVectok::operator=(CVectok& v)
{
	if (this != &v)
	{
		delete pAdr;
		pAdr = new int[nElem = v.nElem];
		int i;
		for (i = 0; i < nElem; i++) pAdr[i] = v.pAdr[i];
	}
	return (*this);
}

~CVect::Cvectok;