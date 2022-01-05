//============================================================================
// Name        : tableaux-11.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Ins�rer une valeur dans un tableau dynamique tri�
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	// D�claration des variables :
	unsigned int N; 		// Dimension
	unsigned int I; 		// indice courant
	int val;	// valeur � ins�rer

	// Saisie de la dimension :
	cout << "Dimension des tableaux (max.50) : ";
	cin >> N;

	// Cr�ation d'un tableau dynamique A sur la base de N :
	vector<int> A(N);

	// Remplissage du tableau :
	cout << "Tableau donn� : " << endl;;
	for (I=0 ; I<A.size() ; I++) {
		cout << "A[" << I << "] : ";
		cin >> A[I];
	}

	// Affichage du tableau A :
	cout << "Tableau donn� : " << endl;
	for (I = 0; I < A.size(); I++) {
		cout << A[I] << "   ";
	}

	// Saisie de l'�l�ment � ins�rer :
	cout << endl;
	cout << "El�ment � ins�rer : ";
	cin >> val;

	// Nouvelle dimension du tableau A : Ajout d'une nouvelle case
	A.push_back(1);

	// D�placer les �l�ments plus grands que VAL d'une position vers l'arri�re :
	for (I = A.size() - 1 ; (I>0) && (A[I-1] > val) ; I--)
		A[I]=A[I-1];

	// VAL est copi� � la position du dernier �l�ment d�plac� :
	A[I] = val;

	// Affichage du r�sultat :
	cout << "Tableau apr�s la saisie de la valeur " << val <<" : " << endl;
	for (I=0; I<A.size(); I++) {
		cout << A[I] << "   ";
	}

	return 0;
}
