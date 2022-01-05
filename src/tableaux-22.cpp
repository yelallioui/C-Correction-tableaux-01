//============================================================================
// Name        : tableaux-22.cpp
// Author      : Youssouf EL ALLIOUI
// Version     :
// Copyright   : (c) Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// Déclaration des variables :
	int N, M, P;         // dimensions des matrices A(N,M), B(N,M) et C(N,M)
	int I, J, K;      // indices courants

	// Saisie des données :
	// 1)La matrice A(N,M) :
	cout << "Nombre de lignes de A (max.50) : ";
	cin >> N;
	cout << "Nombre de colones de A (max.50) : ";
	cin >> M;

	// Création des matrice A(N,M) sur la base de N et M :
	int A[N][M];

	// 2)La matrice B(M,P) :
	cout << "Nombre de lignes de B (max.50) : " << M << endl;
	cout << "Nombre de colones de B (max.50) : ";
	cin >> P;

	// Création de la matrice B(M,P) sur la base de M et P :
	int B[M][P];

	// Création de la matrice C(N,P) sur la base de N et P :
	int C[N][P];

	// Remplissage de la matrice A(N,M) :
	cout << "Remplissage de la matrice A(" << N << "," << M << ") : " << endl;
	for (I=0; I<N; I++) {
		for (J=0; J<M; J++) {
			cout << "A[" << I << "][" << J << "] : ";
			cin >> A[I][J];
		}
	}

	// Remplissage de la matrice B(M,P) :
	cout << "Remplissage de la matrice B(" << M << "," << P << ") : " << endl;
	for (I=0; I<M; I++) {
		for (J=0; J<P; J++) {
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

	// Affichage de la matrice B(M,P) :
	cout << "Matrice donnée, B(" << M << "," << P << ") : " << endl;
	for (I=0; I<M; I++) {
		for (J=0; J<P; J++) {
			cout << B[I][J] << "\t";
		}
		cout << endl;
	}

	// Affectation du résultat du produit à C : (C = A + B)
	for (I=0; I<N; I++) {
		for (J=0; J<P; J++) {
			C[I][J] = 0;
			for (K=0; K<M; K++) {
				C[I][J] += A[I][K] * B[K][J];
			}
		}
	}

	// Affichage de la matrice C(N,P) :
	cout << "Matrice résultat, C(" << N << "," << P << ") : " << endl;
	for (I=0; I<N; I++) {
		for (J=0; J<P; J++) {
			cout << C[I][J] << "\t";
		}
		cout << endl;
	}

	return 0;
}
