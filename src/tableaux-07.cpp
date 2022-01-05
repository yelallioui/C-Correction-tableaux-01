//============================================================================
// Name        : tableaux-07.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Verser un tableau M à deux dimensions L et C dans un tableau
// 				 V à une dimension L*C
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int L, C; 		// dimensions (lignes, colonnes)
	int I, J; 		// indices courants

	// Saisie de nombre de lignes et colonnes :
	cout << "Nombre de lignes   (max.50) : ";
	cin >> L;
	cout << "Nombre de colonnes (max.50) : ";
	cin >> C;

	int T[L][C]; 	// Création du tableau T sur la base de L et C
	int V[L*C];		// Création du tableau M à la base du produit L*C

	// Saisie des données :
	for (I=0; I<L; I++) {
		for (J=0; J<C; J++) {
			cout << "T[" << I << "][" << J << "] : ";
			cin >> T[I][J];
		}
	}

	// Affichage du tableau T :
	cout << "Tableau donné : " << endl;
	for (I=0; I<L; I++) {
		for (J=0; J<C; J++) {
			cout << T[I][J] << "   ";
		}
		cout << endl;
	}

	// Transfer des éléments ligne par ligne :
	for (I=0; I<L; I++) {
		for (J=0; J<C; J++) {
			V[I*C+J] = T[I][J];
		}
	}

	// Affichage du tableau V :
	cout << "Tableau résultant : " << endl;
	for (I=0; I<L*C; I++) {
		cout << V[I] << "   ";
	}

	return 0;
}
