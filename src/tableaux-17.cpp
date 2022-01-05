//============================================================================
// Name        : tableaux-17.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Mise à zéro de la diagonale principale d'une matrice
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// Déclaration des variables :
	int N;         // dimension de la matrice carrée
	int I, J;      // indices courants

	// Saisie de la dimension de la matrice carrée :
	cout << "Dimension de la matrice carrée (max.50) : ";
	cin >> N;

	// Création de la matrice A sur la base de N :
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
	cout << "Matrice donnée A(" << N << ", " << N << ") :" << endl;
	for (I=0; I<N; I++) {
		for (J=0; J<N; J++) {
			cout << A[I][J] << "\t";
		}
		cout << endl;
	}

	// Mise à zéro de la diagonale principale de la matrice A :
	for (I=0; I<N; I++)
		A[I][I]=0;

	// Affichage de la matrice à nouveau :
		cout << "Matrice résultat A(" << N << ", " << N << ") :" << endl;
		for (I=0; I<N; I++) {
			for (J=0; J<N; J++) {
				cout << A[I][J] << "\t";
			}
			cout << endl;
		}

	return 0;
}
