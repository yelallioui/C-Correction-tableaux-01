//============================================================================
// Name        : tableaux09.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Calcul d'un polyn�me de degr� N
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// D�claration des variables :
	int N; 			// degr� du polyn�me
	int I; 			// indice courant
	float X;		// argument
	float P1, P2;	// r�sultats : P1 avec pow et P2 avec Horner

	// Saisie du degr� N et de l'argument X :
	cout << "Entrer le degr�  N du polyn�me : ";
	cin >> N;
	cout << "Entrer la valeur X de l'argument : ";
	cin >> X;

	// Cr�ation d'un tableau A sur la base de N :
	int A[N];

	// Saisie des coefficients :
	for (I=0 ; I<=N ; I++) {
		cout << "Entrer le coefficient " << I << " : ";
		cin >> A[I];
	}

	// a) Calcul du polyn�me � l'aide de la fonction pow() de <cmath> :
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

	// Affichage des r�sultats :
	cout << "Valeur du polyn�me en utilisant la fonction pow()   : " << P1 << endl;
	cout << "Valeur du polyn�me en utilisant le sch�ma de Horner : " << P1 << endl;

	return 0;
}
