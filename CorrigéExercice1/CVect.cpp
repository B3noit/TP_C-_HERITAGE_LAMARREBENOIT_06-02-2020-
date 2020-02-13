#include "CVect.h"
#include <stdlib.h>


CVect::CVect(int nElem)//Constructeur
{

	//pAdr = new int;  FAUX

	*pAdr = new int[nElem];  //Correction
}

CVect::~CVect()//Destructeur o� on lib�re la m�moire sur laquelle pointe pAdr
{
	//free(pAdr); Faux

	delete[]pAdr;  //Correction
}

int& CVect::operator[](int nIndex)//red�finition de l'op�rateur
{
	//return pAdr[index];  FAUX

	if (nIndex >= 0 && nIndex < this->nElem)
	{
		return pAdr[nIndex];
	}
	else
	{
		return pAdr[0];
	}//Correction
}