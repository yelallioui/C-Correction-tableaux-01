//============================================================================
// Name        : tableaux-16.cpp
// Author      : Youssouf EL ALLIOUI
// Version     : 01
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int Notes[7];    // tableau des notes
	int N;           // nombre d'élèves
	int I, IN;       // compteurs d'aide
	int SOM;         // somme des points
	int MAX, MIN;    // maximum, minimum de points
	int MAXN;        // nombre de lignes du graphique

	// Saisie de la dimension :
	cout << "Dimension du tableau (max.50) : ";
	cin >> N;

	// Création du tableau A sur la base de N :
	int Points[N];

	// Remplissage du tableau :
	cout << "Tableau donné : " << endl;;
	for (I=0 ; I<N ; I++) {
		cout << "Point[" << I << "] : ";
		cin >> Points[I];
	}

	// Affichage du tableau :
	cout << "Tableau donné : " << endl;
	for (I = 0; I < N; I++) {
		cout << Points[I] << "   ";
	}
	cout << endl;

	// Calcul du maximum et du minimum des points :
	MAX = Points[0];
	MIN = Points[0];
	for (I=0; I<N; I++) {
		if (Points[I] > MAX) MAX = Points[I];
		if (Points[I] < MIN) MIN = Points[I];
	}

	// Affichage du maximum et du minimum des points :
	cout << endl << "La note maximale est : " << MAX << endl;
	cout << endl << "La note minimale est : " << MIN << endl;

	// Calcul de la moyenne des points :
	SOM = 0;
	for (I=0 ; I<N ; I++) {
		SOM += Points[I];
	}

	// Affichage de la moyenne des points :
	cout << "La moyenne des notes est : " << SOM/N << endl;

	// Initialisation du tableau Notes :
	for (IN=0 ; IN<7 ; IN++) {
		Notes[IN] = 0;
	}

	// Remplissage du tableau Notes sur la base du tableau Points:
	for (I=0; I<N; I++) {
		Notes[Points[I]/10]++;
	}

	// Recherche du maximum MAXN dans Notes :
	MAXN = 0;
	for (IN=0 ; IN<7 ; IN++) {
		if (Notes[IN] > MAXN) {
			MAXN = Notes[IN];
		}
	}

	// Affichage du graphique de barreaux
	// Représentation de MAXN lignes
	for (I=MAXN; I>0; I--) {
		cout << endl;
		cout << I << " >";
		for (IN=0; IN<7; IN++) {
			if (Notes[IN]>=I) {
				cout << " #######";
			}
			else {
				printf("        ");
			}
		}
	}

	// Affichage du domaine des notes :
	cout << endl;
	cout << "   +";
	for (IN=0; IN<7; IN++) {
		cout << "-------+";
	}
	cout << endl;
	cout << "   I 0 - 9 I 10-19 I 20-29 I 30-39 I 40-49 I 50-59 I  60   I";
	cout << endl;

	return 0;
}
