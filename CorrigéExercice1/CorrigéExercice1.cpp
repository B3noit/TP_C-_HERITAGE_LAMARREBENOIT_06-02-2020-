// Exercice1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

//#incude <vector> Cette bibliothèque contient les "vectors" l'équivalent de la classe CVectb
#include <iostream>
#include "CVect.h"
#include "CVectb.h"

int main()
{
	std::cout << "Hello World!\n";

	CVect vecteur(5);
	for (int i = 0; i < 5; i++)
	{
		vecteur[i] = 0;
		std::cout << vecteur[i] << "\n";
	}
	std::cout << vecteur[1000];

	CVectb vecteurB(1, 10);
	for (int i = 1; i <= 10; i++)
	{
		vecteurB[i] = 0;
		std::cout << vecteurB[i] << "\n";
	}//Correction
}