#include "CVect.h"
#include <stdlib.h>


CVect::CVect(int)//Constructeur
{
	pAdr = new int;
}

CVect::~CVect()//Destructeur o� on lib�re la m�moire sur laquelle pointe pAdr
{
	free(pAdr);
}

int& CVect::operator[](int index)//red�finition de l'op�rateur
{
	return pAdr[index];
}
