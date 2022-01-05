//============================================================================
// Name        : tableaux-15.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Tri par propagation (bubble sort)
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// Déclaration des variables :
	int N;		// dimension
	int I;		// rang à partir duquel A n'est pas trié
	int J;     	// indice courant
	int AIDE;  	// pour la permutation

	// Saisie de la dimension :
	cout << "Dimension du tableau (max.50) : ";
	cin >> N;

	// Création du tableau A sur la base de N :
	int A[N];

	// Remplissage du tableau :
	cout << "Tableau donné : " << endl;;
	for (I=0 ; I<N ; I++) {
		cout << "A[" << I << "] : ";
		cin >> A[I];
	}

	// Affichage du tableau :
	cout << "Tableau donné : " << endl;
	for (I = 0; I < N; I++) {
		cout << A[I] << "   ";
	}
	cout << endl;

	// Tri du tableau par sélection directe du maximum :
	for (I=N-1 ; I>0 ; I--) {
		for (J=0; J<I; J++) {
			if (A[J+1]<A[J]) {
				AIDE 	= A[J];
				A[J] 	= A[J+1];
				A[J+1] 	= AIDE;
			}
		}
	}

	// Affichage du tableau à nouveau :
	cout << "Tableau trié : " << endl;
	for (I = 0; I < N; I++) {
		cout << A[I] << "   ";
	}

	return 0;
}
