//============================================================================
// Name        : tableaux-12-a.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Recherche d'une valeur dans un tableau :
//				 a) La recherche séquentielle
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// Déclaration des variables :
	int N; 		// Dimension
	int I; 		// indice courant
	int val;	// valeur à rechercher
	int POS;   	// position de la valeur

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

	// Affichage du tableau A :
	cout << "Tableau donné : " << endl;
	for (I = 0; I < N; I++) {
		cout << A[I] << "   ";
	}

	// Saisie de l'élément à rechercher :
	cout << endl;
	cout << "Elément à rechercher : ";
	cin >> val;

	// Recherche de la position de la valeur
	POS = -1;
	for (I=0 ; (I<N)&&(POS==-1) ; I++) {
		if (A[I] == val) POS=I;
	}

	// Affichage du résultat :
	if (POS==-1) {
		cout << "La valeur recherchée ne se trouve pas dans le tableau !";
	}
	else {
		cout << "La valeur " << val << " se trouve à la position " << POS;
	}

	return 0;
}
