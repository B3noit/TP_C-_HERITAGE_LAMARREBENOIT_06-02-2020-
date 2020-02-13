#include "CVect.h"
#include <stdlib.h>


CVect::CVect(int indice) 
{
	nElem =indice;
	pAdr = &indice;
}

CVect::~CVect()//Destructeur où on libère la mémoire sur laquelle pointe pAdr
{
	free(pAdr);
}

int& CVect::operator[](int index )//redéfinition de l'opérateur
{
	return pAdr[index];
}