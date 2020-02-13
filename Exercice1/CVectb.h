#pragma once
#include "CVect.h"
class CVectb : public CVect//La classe CVectb hérite de la classe CVect
{
private:
	int nMin;//Premier indice du tableau qui sert de vecteur
	int nMax;//Dernier undice du tableau qui sert de vecteur

public:
	CVectb(int nDebut, int nFin) : CVect(nFin - nDebut + 1)
	int & operator [] (int nInt)//redéfinition de l'opérateur

};

