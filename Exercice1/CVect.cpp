#include "CVect.h"
#include <stdlib.h>


CVect::CVect(int nElem)//Constructeur
{

	//pAdr = new int;  FAUX

	*pAdr = new int[int nElem];  //Correction
}

CVect::~CVect()//Destructeur où on libère la mémoire sur laquelle pointe pAdr
{
	//free(pAdr); Faux

	delete[]pAdr;  //Correction
}

int& CVect::operator[](int nIndex)//redéfinition de l'opérateur
{
	//return pAdr[index];  FAUX

	if(nIndex>=0 && nIndex < this->nIndex)
	{
		return pAdr[nIndex]
	}
	else
	{
		return pAdr[0];
	}//Correction
}
