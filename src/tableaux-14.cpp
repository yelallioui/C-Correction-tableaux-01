//============================================================================
// Name        : tableaux-14.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Tri d'un tableau par s�lection du maximum
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// D�claration des variables :
	int N;			// dimension
	int I;			// rang � partir duquel A n'est pas tri�
	int J;     		// indice courant
	int AIDE;  		// pour la permutation
	int PosMax;  	// indique la position de l'�l�ment maximal � droite de A[I]

	// Saisie de la dimension :
	cout << "Dimension du tableau (max.50) : ";
	cin >> N;

	// Cr�ation du tableau A sur la base de N :
	int A[N];

	// Remplissage du tableau :
	cout << "Tableau donn� : " << endl;;
	for (I=0 ; I<N ; I++) {
		cout << "A[" << I << "] : ";
		cin >> A[I];
	}

	// Affichage du tableau :
	cout << "Tableau donn� : " << endl;
	for (I = 0; I < N; I++) {
		cout << A[I] << "   ";
	}
	cout << endl;

	// Tri du tableau par s�lection directe du maximum :
	for (I=0; I<N-1; I++) {
		// Recherche du maximum � droite de A[I] :
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

	// Affichage du tableau � nouveau :
	cout << "Tableau tri� : " << endl;
	for (I = 0; I < N; I++) {
		cout << A[I] << "   ";
	}

	return 0;
}
