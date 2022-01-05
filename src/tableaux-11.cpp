//============================================================================
// Name        : tableaux-11.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Insérer une valeur dans un tableau dynamique trié
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	// Déclaration des variables :
	unsigned int N; 		// Dimension
	unsigned int I; 		// indice courant
	int val;	// valeur à insérer

	// Saisie de la dimension :
	cout << "Dimension des tableaux (max.50) : ";
	cin >> N;

	// Création d'un tableau dynamique A sur la base de N :
	vector<int> A(N);

	// Remplissage du tableau :
	cout << "Tableau donné : " << endl;;
	for (I=0 ; I<A.size() ; I++) {
		cout << "A[" << I << "] : ";
		cin >> A[I];
	}

	// Affichage du tableau A :
	cout << "Tableau donné : " << endl;
	for (I = 0; I < A.size(); I++) {
		cout << A[I] << "   ";
	}

	// Saisie de l'élément à insérer :
	cout << endl;
	cout << "Elément à insérer : ";
	cin >> val;

	// Nouvelle dimension du tableau A : Ajout d'une nouvelle case
	A.push_back(1);

	// Déplacer les éléments plus grands que VAL d'une position vers l'arrière :
	for (I = A.size() - 1 ; (I>0) && (A[I-1] > val) ; I--)
		A[I]=A[I-1];

	// VAL est copié à la position du dernier élément déplacé :
	A[I] = val;

	// Affichage du résultat :
	cout << "Tableau après la saisie de la valeur " << val <<" : " << endl;
	for (I=0; I<A.size(); I++) {
		cout << A[I] << "   ";
	}

	return 0;
}
