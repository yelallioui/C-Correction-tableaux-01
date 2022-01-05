//============================================================================
// Name        : tableaux-12-b.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Recherche d'une valeur dans un tableau trié :
//				 b) La recherche dichotomique (recherche binaire, binary search)
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// Déclaration des variables :
	int N; 				// Dimension
	int I; 				// indice courant
	int val;			// valeur à rechercher
	int POS;   			// position de la valeur
	int inferieur, milieu, superieur;	// limites du champ de recherche */

	// Saisie de la dimension :
	cout << "Dimension des tableaux (max.50) : ";
	cin >> N;

	// Création d'un tableau A sur la base de N :
	int A[N];

	// Remplissage du tableau :
	cout << "Tableau donné : " << endl;
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

	// Initialisation des limites du domaine de recherche :
	inferieur = 0;
	superieur = N-1;

	// Recherche de la position de la valeur : (Le tableau A doit être trié)
	POS = -1;
	while ((inferieur <= superieur) && (POS == -1)) {
		milieu = (superieur + inferieur)/2;
		if (val < A[milieu]) 		superieur = milieu - 1;
		else if (val > A[milieu]) 	inferieur = milieu + 1;
		else 						POS = milieu;
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

/*
 Question: Quel est l'avantage de la recherche dichotomique ?

Dans le pire des cas d'une recherche séquentielle, il faut traverser tout le tableau avant de trouver la valeur ou avant d'être sûr qu'une valeur ne se trouve pas dans le tableau.

Lors de la recherche dichotomique, on élimine la moitié des éléments du tableau à chaque exécution de la boucle. Ainsi, la recherche se termine beaucoup plus rapidement.

La recherche dichotomique devient extrêmement avantageuse pour la recherche dans de grands tableaux (triés) : L'avantage de la recherche dichotomique par rapport à la recherche séquentielle monte alors exponentiellement avec la grandeur du tableau à trier.

Exemple:

Lors de la recherche dans un tableau de 1024 éléments:

-	le pire des cas pour la recherche séquentielle peut entraîner 1024 exécutions de la boucle.

-	le pire des cas pour la recherche dichotomique peut entraîner 10 exécutions de la boucle.

Lors de la recherche dans un tableau de 1 048 576 éléments:

-	le pire des cas pour la recherche séquentielle peut entraîner 1 048 576 exécutions de la boucle.

-	le pire des cas pour la recherche dichotomique peut entraîner 20 exécutions de la boucle.
 */
