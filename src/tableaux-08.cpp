//============================================================================
// Name        : tableaux-08.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Produit scalaire de deux vecteurs
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int N; 			// la dimension
	int I; 			// l'indice courant
	int PS (0); 	// le produit scalaire

	// Saisie de la dimension :
	cout << "Dimension des tableaux (max.50) : ";
	cin >> N;

	int U[N], V[N]; // Cr�ation des tableaux U et V sur la base N

	// Saisie des donn�es du premier tableau :
	cout << "Premier tableau : " << endl;
	for (I=0; I<N; I++) {
		cout << "U[" << I << "] : ";
		cin >> U[I];
	}

	// Saisie des donn�es de deuxi�me tableau :
	cout << "Deuxi�me tableau : " << endl;
	for (I=0; I<N; I++) {
		cout << "V[" << I << "] : ";
		cin >> V[I];
	}

	// Calcul du produit scalaire :
	for (I=0; I<N; I++) {
		PS += U[I]*V[I];
	}

	// Affichage du r�sultat :
	cout << "Produit scalaire : " << PS;

	return 0;
}
