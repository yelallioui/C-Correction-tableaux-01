//============================================================================
// Name        : tableaux-13.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Fusion de deux tableaux triés
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int N, M; 			// dimensions
	int IA, IB, IFUS; 	// indices courants

	// Saisie de la dimension :
	cout << "Dimension du premier tableau (max.50) : ";
	cin >> N;
	cout << "Dimension du second tableau (max.50) : ";
	cin >> M;

	// Création d'un tableau A sur la base de N :
	int A[N];
	int B[M];
	int FUS[N+M];

	// Remplissage du tableau A :
	cout << "Entrer les éléments de A dans l'ordre croissant : " << endl;;
	for (IA=0 ; IA<N ; IA++) {
		cout << "A[" << IA << "] : ";
		cin >> A[IA];
	}

	// Remplissage du tableau B :
	cout << "Entrer les éléments de A dans l'ordre croissant : " << endl;;
	for (IB=0 ; IB<M ; IB++) {
		cout << "B[" << IB << "] : ";
		cin >> B[IB];
	}

	// Affichage des tableaux A et B :
	cout << "Tableau A : " << endl;
	for (IA = 0; IA < N; IA++) {
		cout << A[IA] << "   ";
	}
	cout << endl << "Tableau B : " << endl;
	for (IB = 0; IB < M; IB++) {
		cout << B[IB] << "   ";
	}

	/* Fusion des éléments de A et B dans FUS de
	 * façon à ce que FUS soit aussi trié :     */
	IA = 0; IB = 0; IFUS = 0;
	while ((IA < N) && (IB < M)) {
		if(A[IA] < B[IB]) {
			FUS[IFUS]=A[IA];
			IFUS++;
			IA++;
		}
		else {
			FUS[IFUS]=B[IB];
			IFUS++;
			IB++;
		}
	}

	while (IA<N) {
		 FUS[IFUS]=A[IA];
		 IFUS++;
		 IA++;
	}
	 while (IB<M) {
		 FUS[IFUS]=B[IB];
		 IFUS++;
		 IB++;
	}

	// Affichage du résultat :
	cout << endl << "Tableau FUS : " << endl;
	for (IFUS = 0; IFUS < N+M; IFUS++) {
		cout << FUS[IFUS] << "   ";
	}

	return 0;
}
