//============================================================================
// Name        : tableaux-19.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : (c) Your copyright notice
// Description : Transposition d'une matrice
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// D�claration des variables :
	int N, M;         // dimensions des matrices A(N,M) et B(M,N)
	int I, J;      // indices courants

	// Saisie des dimensions de la matrice A(N,M) :
	cout << "Nombre de lignes   (max.50) : ";
	cin >> N;
	cout << "Nombre de colonnes   (max.50) : ";
	cin >> M;

	// Cr�ation des matrice A(N,M) et B(M,N) sur la base de N et M :
	int A[N][M];
	int B[M][N];

	// Remplissage de la matrice A(N,M) :
	for (I=0; I<N; I++) {
		for (J=0; J<M; J++) {
			cout << "A[" << I << "][" << J << "] : ";
			cin >> A[I][J];
		}
	}

	// Affichage de la matrice A(N,M) :
	cout << "Matrice donn�e, A(" << N << "," << M << ") : " << endl;
	for (I=0; I<N; I++) {
		for (J=0; J<M; J++) {
			cout << A[I][J] << "\t";
		}
		cout << endl;
	}

	// Construction de la matrice transpos�e � B(M,N) :
	for (I=0; I<N; I++) {
		for (J=0; J<M; J++) {
			B[J][I] = A[I][J];
		}
	}

	// Affichage de la matrice B(M,N), le r�le de N et M est maintenant invers� :
	cout << "Matrice r�sultat, B(" << M << "," << N << ") : " << endl;
	for (I=0; I<M; I++) {
		for (J=0; J<N; J++) {
			cout << B[I][J] << "\t";
		}
		cout << endl;
	}

	return 0;
}
