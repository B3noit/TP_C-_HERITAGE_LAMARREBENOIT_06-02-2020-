// Exercice2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "CVectok.h"

int main()
{
	int nCpt = 0;


	CVectok vOk(6);

	std::cout << "vecteur 1 : ";
	for(nCpt=0; nCpt<vOk.taille(); nCpt++)
	{ 
		vOk[nCpt] = nCpt;
	}

	for (nCpt = 0; nCpt < vOk.taille(); nCpt++)
	{
		std::cout << vOk[nCpt] <<" ";
	}
	std::cout << "\n";

	CVectok wOk(3);
	wOk = vOk;

	std::cout << "vecteur 2 : ";
	for (nCpt = 0; nCpt < wOk.taille(); nCpt++) 
	{
		std::cout << vOk[nCpt] << " ";
	}
	std::cout << "\n";



}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
