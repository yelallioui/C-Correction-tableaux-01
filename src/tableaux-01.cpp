//============================================================================
// Name        : tableaux01.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Ce programme permet de remplir un tableau par des valeurs entrées au clavier et affiche le tableau
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//Déclaration des variables :
	 int N;     	// la dimension du tableau
	 int Somme;  	// la somme des éléments

	 // Saisie des données :
	 cout << "Dimension du tableau (max.50) : ";
	 cin >> N;

	 int T[N]; 		// Création du tableau à la base de N

	 // Remplissage du tableau :
	 for (int I = 0; I < N; ++I) {
		 cout << "Element " << I << " : ";
		 cin >> T[I];
	 }

	 //Affichage du tableau :
	 cout << "Tableau donné : " << endl;
	 for (int I=0; I<N; I++)
		 cout << T[I] << "   ";
	 cout << endl;

	 //Calcul de la somme :
	 Somme = 0;
	 for (int I=0; I<N; I++)
		 Somme += T[I];

	 //Affichage du résultat :
	 cout << "Somme de éléments : " << Somme;

	return 0;
}
