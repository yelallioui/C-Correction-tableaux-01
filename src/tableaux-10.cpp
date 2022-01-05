//============================================================================
// Name        : tableaux-10.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Maximum et minimum des valeurs d'un tableau
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// Déclaration des variables :
	int N; 		// Dimension
	int I; 		// indice courant
	int posMin;	// position du minimum
	int posMax;	// position du maximum

	// Saisie de la dimension :
	cout << "Dimension des tableaux (max.50) : ";
	cin >> N;

	// Création d'un tableau A sur la base de N :
	int A[N];

	// Remplissage du tableau :
	cout << "Tableau donné : " << endl;;
	for (I=0 ; I<N ; I++) {
		cout << "A[" << I << "] : ";
		cin >> A[I];
	}

	// Recherche des positions de maximum et de minimum :
	posMax = 0;		// 0 correspond à la position du premier élément
	posMin = 0;		// 0 correspond à la position du premier élément
	for (I=0; I<N; I++) {
		if(A[I] > A[posMax]) posMax = I;
		if(A[I] < A[posMin]) posMin = I;
	}

	// Affichage du résultat :
	cout << "Valeur   du minimum : " << A[posMin] << endl;
	cout << "Position du minimum : " << posMin << endl;
	cout << "Valeur   du maximum : " << A[posMax] << endl;
	cout << "Position du maximum : " << posMax << endl;

	return 0;
}
