//============================================================================
// Name        : tableaux-21.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : (c) Your copyright notice
// Description : Addition de deux matrices A(N,M) et B(N,M)
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// Déclaration des variables :
	int N, M;         // dimensions des matrices A(N,M), B(N,M) et C(N,M)
	int I, J;      // indices courants

	// Saisie des dimensions de la matrice A(N,M) :
	cout << "Nombre de lignes	(max.50) : ";
	cin >> N;
	cout << "Nombre de colonnes	(max.50) : ";
	cin >> M;

	// Création des matrice A(N,M) et B(M,N) sur la base de N et M :
	int A[N][M];
	int B[N][M];
	int C[N][M];

	// Remplissage de la matrice A(N,M) :
	for (I=0; I<N; I++) {
		for (J=0; J<M; J++) {
			cout << "A[" << I << "][" << J << "] : ";
			cin >> A[I][J];
		}
	}

	// Remplissage de la matrice B(N,M) :
	for (I=0; I<N; I++) {
		for (J=0; J<M; J++) {
			cout << "B[" << I << "][" << J << "] : ";
			cin >> B[I][J];
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

	// Affichage de la matrice A(N,M) :
	cout << "Matrice donnée, B(" << N << "," << M << ") : " << endl;
	for (I=0; I<N; I++) {
		for (J=0; J<M; J++) {
			cout << B[I][J] << "\t";
		}
		cout << endl;
	}

	// Affectation du résultat de l'addition à C : (C = A + B)
	for (I=0; I<N; I++) {
		for (J=0; J<M; J++) {
			C[I][J] = A[I][J] + B[I][J];
		}
	}

	// Affichage de la matrice A(N,M) :
	cout << "Matrice résultat, C(" << N << "," << M << ") : " << endl;
	for (I=0; I<N; I++) {
		for (J=0; J<M; J++) {
			cout << C[I][J] << "\t";
		}
		cout << endl;
	}

	return 0;
}
