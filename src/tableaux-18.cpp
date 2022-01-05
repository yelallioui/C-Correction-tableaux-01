//============================================================================
// Name        : tableaux-18.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Matrice unitaire
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
	int U[N][N];

	// Construction de la matrice carr�e unitaire :
	for (I=0; I<N; I++) {
		for (J=0; J<N; J++) {
			if (I==J)
				U[I][J] = 1;
			else
				U[I][J] = 0;
		}
	}

	// Affichage de la matrice :
	cout << "Matrice unitaire de dimension " << N << " : " << endl;
	for (I=0; I<N; I++) {
		for (J=0; J<N; J++) {
			cout << U[I][J] << "\t";
		}
		cout << endl;
	}

	return 0;
}
