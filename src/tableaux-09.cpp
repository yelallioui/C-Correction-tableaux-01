//============================================================================
// Name        : tableaux09.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Calcul d'un polynôme de degré N
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// Déclaration des variables :
	int N; 			// degré du polynôme
	int I; 			// indice courant
	float X;		// argument
	float P1, P2;	// résultats : P1 avec pow et P2 avec Horner

	// Saisie du degré N et de l'argument X :
	cout << "Entrer le degré  N du polynôme : ";
	cin >> N;
	cout << "Entrer la valeur X de l'argument : ";
	cin >> X;

	// Création d'un tableau A sur la base de N :
	int A[N];

	// Saisie des coefficients :
	for (I=0 ; I<=N ; I++) {
		cout << "Entrer le coefficient " << I << " : ";
		cin >> A[I];
	}

	// a) Calcul du polynôme à l'aide de la fonction pow() de <cmath> :
	P1 = 0.0;
	for (I=0 ; I<=N ; I++) {
		P1 +=  A[I] * pow(X, I);
	}

	// b) Calcul de Horner :
	// Pour cela on commence le calcul avec le dernier coefficient :
	P2 = 0.0;
	for (I=0 ; I<=N ; I++) {
		P2 = P2*X + A[N-I];
	}

	// Affichage des résultats :
	cout << "Valeur du polynôme en utilisant la fonction pow()   : " << P1 << endl;
	cout << "Valeur du polynôme en utilisant le schéma de Horner : " << P1 << endl;

	return 0;
}
