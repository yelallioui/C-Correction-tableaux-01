//============================================================================
// Name        : tableaux-20.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : (c) Your copyright notice
// Description : Multiplication d'une matrice par un réel
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// Déclaration des variables :
	int N, M;  	// dimensions des matrices A(N,M) et B(N,M)
	int I, J;  	// indices courants
	float X;	//multiplicateur   */

	// Saisie des dimensions de la matrice A(N,M) et B(N,M) :
	cout << "Nombre de lignes   (max.50) : ";
	cin >> N;
	cout << "Nombre de colonnes   (max.50) : ";
	cin >> M;

	// Création des matrice A(N,M) et B(N,M) sur la base de N et M :
	int A[N][M];
	int B[N][M];

	// Remplissage de la matrice A(N,M) :
	for (I=0; I<N; I++) {
		for (J=0; J<M; J++) {
			cout << "A[" << I << "][" << J << "] : ";
			cin >> A[I][J];
		}
	}

	// Affichage de la matrice A(N,M) :
	cout << "Matrice donnée, A(" << N << "," << M << ") : " << endl;
	for (I=0; I<N; I++) {
		for (J=0; J<M; J++) {
			cout << A[I][J] << "\t";
		}
		cout << endl;
	}

	// Saisie de multiplicateur X :
	cout << "Multiplicateur X : ";
	cin >> X;

	// Affectation du résultat de la multiplication à B :
	for (I=0; I<N; I++) {
		for (J=0; J<M; J++) {
			B[I][J] = X * A[I][J];
		}
	}

	// Affichage de la matrice B(N,M) :
	cout << "Matrice donnée, B(" << N << "," << M << ") : " << endl;
	for (I=0; I<N; I++) {
		for (J=0; J<M; J++) {
			cout << B[I][J] << "\t";
		}
		cout << endl;
	}


	return 0;
}
