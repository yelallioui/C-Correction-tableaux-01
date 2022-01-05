//============================================================================
// Name        : tableaux-14.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Tri d'un tableau par sélection du maximum
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// Déclaration des variables :
	int N;			// dimension
	int I;			// rang à partir duquel A n'est pas trié
	int J;     		// indice courant
	int AIDE;  		// pour la permutation
	int PosMax;  	// indique la position de l'élément maximal à droite de A[I]

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
	for (I=0; I<N-1; I++) {
		// Recherche du maximum à droite de A[I] :
		PosMax = I;
		for (J=I+1; J<N; J++) {
			if (A[J]>A[PosMax])
				PosMax = J;
		}
		// Echange de A[I] avec le maximum :
		AIDE = A[I];
		A[I] = A[PosMax];
		A[PosMax]=AIDE;
	}

	// Affichage du tableau à nouveau :
	cout << "Tableau trié : " << endl;
	for (I = 0; I < N; I++) {
		cout << A[I] << "   ";
	}

	return 0;
}
