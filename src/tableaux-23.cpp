//============================================================================
// Name        : tableaux-23.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : (c) Your copyright notice
// Description : Triangle de Pascal
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// D�claration des variables :
	int N;   	// dimensions des matrices A(N,M) et B(M,N)
	int I, J;  	// indices courants

	// Saisie du degr� N du triangle de Pascal :
	do {
		cout << "Entrez le degr� N du triangle (max.13) : ";
		cin >> N;
	} while (N>13||N<0);

	// Cr�ation de la matrice P(N,N) sur la base de N :
	int P[N][N];

	// Construction des lignes 0 � N du triangle:
	// Calcul des composantes du triangle jusqu'� la diagonale principale.
	for (I=0; I<=N; I++) {
		P[I][I]=1;
		P[I][0]=1;
		for (J=1; J<I; J++)
			P[I][J] = P[I-1][J] + P[I-1][J-1];
	}

	// Affichage de la matrice P(N,N) :
	cout << "Triangle de Pascal de degr� " << N << " : " << endl;
	for (I=0; I<N+1; I++) {
		cout << "N=" << I << "\t";
		for (J=0; J<I+1; J++) {
			cout << P[I][J] << "\t";
		}
		cout << endl;
	}



	//
	return 0;
}
