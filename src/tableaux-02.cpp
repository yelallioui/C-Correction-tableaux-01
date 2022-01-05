//============================================================================
// Name        : tableaux-02.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//Déclaration des variables :
	int N;     		// la dimension du tableau
	int I, J; 		// les compteurs des boucles utilisées
	int Somme;  	// la somme des éléments

	// Saisie des données :
	cout << "Dimension du tableau (max.50) : ";
	cin >> N;

	int T[N]; 		// Création du tableau à la base de N

	// Remplissage du tableau :
	for (I = 0; I < N; ++I) {
		cout << "Element " << I << " : ";
		cin >> T[I];
	}

	//Affichage du tableau :
	cout << "Tableau donné : " << endl;
	for (I=0; I<N; I++)
		cout << T[I] << "   ";
	cout << endl;

	// Effacer les zéros et comprimer :
	 for (I=0, J=0 ; I<N ; I++) {
		 T[J] = T[I];		// Copier tous les éléments de I vers J
	     if (T[I]) J++;		// augmenter J pour les éléments non nuls.
	 }
	 // Nouvelle dimension du tableau :
	 N = J;

	 // Edition des résultats :
	 cout << "Tableau résultat :" << endl;
	 for (I=0; I<N; I++)
		 cout << T[I] << "   ";
	 cout << endl;

	return 0;
}
