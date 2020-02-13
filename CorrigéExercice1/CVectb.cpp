#include "CVectb.h"

CVectb::CVectb(int nDebut, int nFin) : CVect(nFin - nDebut + 1)
{
	nMin = nDebut;
	nMax = nFin;
}

int& CVectb :: operator [] (int nInt)//redéfinition de l'opérateur
{
	return pAdr[nInt - nMin];
}