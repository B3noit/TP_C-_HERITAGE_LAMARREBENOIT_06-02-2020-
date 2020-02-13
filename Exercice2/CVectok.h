#pragma once
#include "CVect.h"
class CVectok : public CVect
{
public :
	CVectok(int nDimension) : CVect(nDimension) {};
	CVectok(CVectok &);
	CVectok& operator =(CVectok &);
	int taille()
	{
		return nElem;
	}
	~~CVectok;
};

