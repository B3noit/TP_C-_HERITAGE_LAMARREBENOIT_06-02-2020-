#include "CVect.h"
#include <stdlib.h>


CVect::CVect(int)//Constructeur
{
	pAdr = new int;
}

CVect::~CVect()//Destructeur où on libère la mémoire sur laquelle pointe pAdr
{
	free(pAdr);
}

int& CVect::operator[](int index)//redéfinition de l'opérateur
{
	return pAdr[index];
}
