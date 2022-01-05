//============================================================================
// Name        : tableaux-12-b.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Recherche d'une valeur dans un tableau tri� :
//				 b) La recherche dichotomique (recherche binaire, binary search)
//============================================================================

#include <iostream>
using namespace std;

int main() {
	// D�claration des variables :
	int N; 				// Dimension
	int I; 				// indice courant
	int val;			// valeur � rechercher
	int POS;   			// position de la valeur
	int inferieur, milieu, superieur;	// limites du champ de recherche */

	// Saisie de la dimension :
	cout << "Dimension des tableaux (max.50) : ";
	cin >> N;

	// Cr�ation d'un tableau A sur la base de N :
	int A[N];

	// Remplissage du tableau :
	cout << "Tableau donn� : " << endl;
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

	// Initialisation des limites du domaine de recherche :
	inferieur = 0;
	superieur = N-1;

	// Recherche de la position de la valeur : (Le tableau A doit �tre tri�)
	POS = -1;
	while ((inferieur <= superieur) && (POS == -1)) {
		milieu = (superieur + inferieur)/2;
		if (val < A[milieu]) 		superieur = milieu - 1;
		else if (val > A[milieu]) 	inferieur = milieu + 1;
		else 						POS = milieu;
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

/*
 Question: Quel est l'avantage de la recherche dichotomique ?

Dans le pire des cas d'une recherche s�quentielle, il faut traverser tout le tableau avant de trouver la valeur ou avant d'�tre s�r qu'une valeur ne se trouve pas dans le tableau.

Lors de la recherche dichotomique, on �limine la moiti� des �l�ments du tableau � chaque ex�cution de la boucle. Ainsi, la recherche se termine beaucoup plus rapidement.

La recherche dichotomique devient extr�mement avantageuse pour la recherche dans de grands tableaux (tri�s) : L'avantage de la recherche dichotomique par rapport � la recherche s�quentielle monte alors exponentiellement avec la grandeur du tableau � trier.

Exemple:

Lors de la recherche dans un tableau de 1024 �l�ments:

-	le pire des cas pour la recherche s�quentielle peut entra�ner 1024 ex�cutions de la boucle.

-	le pire des cas pour la recherche dichotomique peut entra�ner 10 ex�cutions de la boucle.

Lors de la recherche dans un tableau de 1 048 576 �l�ments:

-	le pire des cas pour la recherche s�quentielle peut entra�ner 1 048 576 ex�cutions de la boucle.

-	le pire des cas pour la recherche dichotomique peut entra�ner 20 ex�cutions de la boucle.
 */
