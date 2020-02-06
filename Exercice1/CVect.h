#pragma once
class CVect
{
protected:
	//Données membres de la classe
	int nElem;//nombre d'éléments
	int* pAdr;//adresse zone dynamique contenant les éléments

public:
	CVect(int); //constructeur (précise la taille du vecteur)
	~CVect(); //destructeur
	int & operator [] (int); //accès à un élément par son "indice"
};

