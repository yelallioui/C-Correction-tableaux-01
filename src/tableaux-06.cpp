//============================================================================
// Name        : tableaux-06.cpp
// Author      : Youssouf EL ALLIOUI
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int L, C; 		// dimensions (lignes, colonnes)
	int I, J; 		// indices courants
	int SOMME (0);		// somme des éléments

	// Saisie des données :
	cout << "Nombre de lignes   (max.50) : ";
	cin >> L;
	cout << "Nombre de colonnes (max.50) : ";
	cin >> C;

	int T[L][C]; 		// Création du tableau à la base de L et C

	// Saisie des données :
	for (I=0; I<L; I++) {
		for (J=0; J<C; J++) {
			cout << "T[" << I << "][" << J << "] : ";
			cin >> T[I][J];
		}
	}

	// Affichage du tableau :
	cout << "Tableau donné : " << endl;
	for (I=0; I<L; I++) {
		for (J=0; J<C; J++) {
			cout << T[I][J] << "   ";
		}
		cout << endl;
	}

	// Calcul et affichage de la somme des lignes :
	cout << "Somme des lignes : " << endl;
	for (I=0; I<L; I++) {
		SOMME = 0;
		for (J=0; J<C; J++) {
			SOMME += T[I][J];
		}
		cout << "Somme de la ligne " << I << " : " << SOMME << endl;
	}

	// Calcul et affichage de la somme des colonnes :
	cout << "Somme des colonnes : " << endl;
	for (I=0; I<L; I++) {
		SOMME = 0;
		for (J=0; J<C; J++) {
			SOMME += T[I][J];
		}
		cout << "Somme de la colonne " << I << " : " << SOMME << endl;
	}


	return 0;
}
