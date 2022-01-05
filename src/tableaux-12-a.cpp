//============================================================================
// Name        : tableaux-12-a.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Recherche d'une valeur dans un tableau :
//				 a) La recherche s�quentielle
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// D�claration des variables :
	int N; 		// Dimension
	int I; 		// indice courant
	int val;	// valeur � rechercher
	int POS;   	// position de la valeur

	// Saisie de la dimension :
	cout << "Dimension des tableaux (max.50) : ";
	cin >> N;

	// Cr�ation d'un tableau A sur la base de N :
	int A[N];

	// Remplissage du tableau :
	cout << "Tableau donn� : " << endl;;
	for (I=0 ; I<N ; I++) {
		cout << "A[" << I << "] : ";
		cin >> A[I];
	}

	// Affichage du tableau A :
	cout << "Tableau donn� : " << endl;
	for (I = 0; I < N; I++) {
		cout << A[I] << "   ";
	}

	// Saisie de l'�l�ment � rechercher :
	cout << endl;
	cout << "El�ment � rechercher : ";
	cin >> val;

	// Recherche de la position de la valeur
	POS = -1;
	for (I=0 ; (I<N)&&(POS==-1) ; I++) {
		if (A[I] == val) POS=I;
	}

	// Affichage du r�sultat :
	if (POS==-1) {
		cout << "La valeur recherch�e ne se trouve pas dans le tableau !";
	}
	else {
		cout << "La valeur " << val << " se trouve � la position " << POS;
	}

	return 0;
}
