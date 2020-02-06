#pragma once
class CVect
{
protected:
	//Donn�es membres de la classe
	int nElem;//nombre d'�l�ments
	int* pAdr;//adresse zone dynamique contenant les �l�ments

public:
	CVect(int); //constructeur (pr�cise la taille du vecteur)
	~CVect(); //destructeur
	int & operator [] (int); //acc�s � un �l�ment par son "indice"
};

