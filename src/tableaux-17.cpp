//============================================================================
// Name        : tableaux-17.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Mise � z�ro de la diagonale principale d'une matrice
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// D�claration des variables :
	int N;         // dimension de la matrice carr�e
	int I, J;      // indices courants

	// Saisie de la dimension de la matrice carr�e :
	cout << "Dimension de la matrice carr�e (max.50) : ";
	cin >> N;

	// Cr�ation de la matrice A sur la base de N :
	int A[N][N];

	// Remplissage de la matrice :
	cout << "Remplissage de la matrice A(" << N << ", " << N << ") :" << endl;
	for (I=0; I<N; I++) {
		for (J=0; J<N; J++) {
			cout << "A[" << I << "][" << J << "] : ";
			cin >> A[I][J];
		}
	}

	// Affichage de la matrice :
	cout << "Matrice donn�e A(" << N << ", " << N << ") :" << endl;
	for (I=0; I<N; I++) {
		for (J=0; J<N; J++) {
			cout << A[I][J] << "\t";
		}
		cout << endl;
	}

	// Mise � z�ro de la diagonale principale de la matrice A :
	for (I=0; I<N; I++)
		A[I][I]=0;

	// Affichage de la matrice � nouveau :
		cout << "Matrice r�sultat A(" << N << ", " << N << ") :" << endl;
		for (I=0; I<N; I++) {
			for (J=0; J<N; J++) {
				cout << A[I][J] << "\t";
			}
			cout << endl;
		}

	return 0;
}
