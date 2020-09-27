// TP1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// QUESTION 1
/*#include <iostream>
#include <stdio.h>
int main()
{
	int t;
	int tempo;
	bool etudiant = false;
	float prix = 0;
	int age; 
	printf("entrez l'age du client:\n");
	tempo = scanf_s("%d", &age);
	printf("Le client est-il étudiant (1: oui, 0: non)?\n");
	tempo = scanf_s("%d", &t);
	if (t == 1) {
		etudiant = true;
	}
	if (age >= 61) {
		prix = 30.0;
	}
	else if (age >= 26) {
		prix = 38.0;
	}
	else if (age >= 12) {
		prix = 22.0;
	}
	else {
		prix = 0;
	}
	if (etudiant) {
		prix = prix*0.85;
	}
	printf("Prix abonnement :%.2f", prix);
}*/



// QUESTION 2
/*#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(NULL));
	int entreeUser;
	int randint;
	int nbrEssai =0;
	randint = 1 + rand() % 100;
	do {
		printf("Entrer un nombre entier entre 0 et 99 :\n");
		scanf_s("%d", &entreeUser);
		if (entreeUser < randint)
			printf("Le nombre à deviner est plus grand!\n");
		if (entreeUser > randint) 
			printf("Le nombre à deviner est plus petit!\n");
		nbrEssai += 1;
	}while (entreeUser != randint);
	printf("Trouvé! Vous avez utilisé %d essai(s)", nbrEssai);
}*/

// QUESTION 2 BONUS
/*int main() {
	int max = 100;
	int min = 0;
	int guess = max/2;
	int previous = 0;
	int nbrEssai=0;
	char rep;
	bool trouve = false;
	do {
		printf("Je propose %d\n",guess);
		printf("Entrez \n = si c'est gagné\n + si la valeur est plus grande\n - si la valeur est plus petite\n");
		scanf_s(" %c", &rep);
		if (rep == '=') {
			trouve = true;
		}
		else if (rep == '+') {
			guess = guess/2+previous;
		}
		else if (rep == '-') {
			guess = guess/2+ previous ;
		}
	} while (!trouve);
}*/

//QUESTION 3
/*int main() {
	srand(time(NULL));
	int grilleUser[5];
	int gain = 0;
	int grillePC[5];
	int bonNum = 0;
	printf("Entrez les 5 nombres compris entre 0 et 49 pour valider votre bulletin\n");
	for (int i = 0; i < 5; i++) {
		printf("nombre : ");
		scanf_s("%d", grilleUser+ i);
		grillePC[i] = rand() % 49;
		if (grilleUser[i] < 0 || grilleUser[i] > 49) {
			printf("valeur incorrecte enter another value\n");
			i--;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int y = 0; y < 5; y++) {
			if (grilleUser[i] == grillePC[y]) {
				bonNum += 1;
			}
		}
	}
	
	printf("Votre grille : \n[ ");
	for (int i = 0; i < 5; i++) {
		printf("%d,", grilleUser[i]);
	}
	printf(" ]\nGrille gagnante \n[ ");
	for (int i = 0; i < 5; i++) {
		printf("%d,", grillePC[i]);
	}
	printf(" ]\n");
	switch (bonNum) {
		case(2):gain = 4; break;
		case(3):gain = 50; break;
		case(4):gain = 1300; break;
		case(5):gain = 25000; break;
	}

	printf("Nombre de bon numéros : %d\n", bonNum);
	if (gain != 0)
		printf("Vous avez gagné %d euros", gain);
	else
		printf("Vous n'avez rien gagné");
}*/

// QUESTION 4
/*int main() {
	int nbrLignes;
	printf("Nombre de lignes du papillon ?\n");
	scanf_s("%d", &nbrLignes);
	for (int i = 0; i < nbrLignes; i++) {
		printf("0 ");
		for (int y = 1; y < nbrLignes-1; y++) {
			if (i == y) {
				printf("0 ");
			}
			else if (i == nbrLignes - y - 1) {
				printf("0 ");
			}
			else {
				printf(". ");
			}
			
		}
		printf("0 \n");
	}
}*/
// QUESTION 5
/*int main() {
	char operande;
	int premNombre;
	int deuxNombre;
	bool invalide = false;
	bool fin = false;
	int result;
	do {
		printf("Entrez une opération parmi * + - /  %% (q pour quitter):\n");
		scanf_s(" %c", &operande);
		if (operande == 'q') {
			break;
		}
		printf("Entrez le premier opérande:\n");
		scanf_s(" %d", &premNombre);
		do {
			printf("Entrez le deuxième opérande:\n");
			scanf_s("%d", &deuxNombre);

			invalide = false;
			if ((operande == '/' || operande == '%') && deuxNombre == 0) {
				invalide = true;
			}
		} while (invalide);
		switch (operande) {
			case '*':result = premNombre * deuxNombre; break;
			case'/':result = premNombre / deuxNombre; break;
			case'%':result = premNombre % deuxNombre; break;
			case'+':result = premNombre + deuxNombre; break;
			case'-':result = premNombre - deuxNombre; break;
			default:printf("operation invalide\n");
		}
		printf("resultat = %d\n", result);
	} while (!fin);
}*/

// QUESTION BONUS
/*int main() {
	unsigned long int k;
	unsigned long int n;
	unsigned long int result=0;
	printf("enter n : ");
	scanf_s("%d", &n);
	printf("\nenter k : ");
	scanf_s("%d", &k);

	if (k > n - k)
		k = n - k;
	result = 1;
	for (unsigned long int i = 0; i < k; ++i) {
		printf("result = %d, n-i = %d, i+1 = %d\n", result, n-i, i+1);
		result *= (n - i);
		result /= (i + 1);
	}
	printf("result : %d", result);
}*/


//TD1
// puissance
/*int main() {
	float x; float result;
	int a;
	printf("entrez la valeur à mettre à la puissance : ");
	scanf_s("%f", &x);
	printf("entrez la valeur de la puissance : ");
	scanf_s("%d", &a);
	result = x;
	if (a > 0) {
		for (int i = 1; i < a; i++) {
			printf("result ==== %f\n", result);
			result *= x;
		}
	}
	else if (a < 0) {
		printf("test\n");
		result = 1; 
		for (int i = 0; i > a; i--) {
			result /= x;
		}
	}
	else {
		result = 1;
	}
	printf("result = %f", result);
}*/

/*int main() {
	int entree;
	int sum = 0;
	printf("nombre :");
	scanf_s("%d", &entree);
	while (entree > 0) {
		sum += entree % 10;
		entree /= 10;
	}
	printf("somme des chiffre : %d", sum);
}*/

//Bonus 1
/*int main() {
	int entree;
	int sum;
	printf("nombre :");
	scanf_s("%d", &entree);
	sum = entree;
	while (sum > 10) {
		if (sum >= 10) {
			entree = sum;
			sum = 0;
		}
		while (entree > 0) {
			sum += entree % 10;
			entree /= 10;
		}
	}
	printf("somme des chiffre : %d", sum);
}*/

//BONUS 2a
/*int recursion(int sum, int entree) {
	if (entree > 0) {
		sum += entree % 10;
		entree /= 10;
		return recursion(sum, entree);
	}
	else if (entree == 0 && sum > 10) {
		return recursion(0, sum);
	}
	return sum;
}

int main() {
	int entree;
	int sum;
	int result;
	printf("nombre :");
	scanf_s("%d", &entree);
	sum = 0;
	result = recursion(sum, entree);
	printf("somme des chiffre : %d", result);
	return EXIT_SUCCESS;
} */


//TD 2
// gestion promo
/*#define TAILLE_PROMO 9
#define NB_GROUPES 3  
#define NB_ELEVE_GROUPE 3
int main() {
	float promo[TAILLE_PROMO];
	float moyPro=0;
	int indiceBest = 0;
	int indiceWorst = 0;
	float moyG1=0;
	float moyG2=0;
	float moyG3=0;
	for (int i = 0; i < TAILLE_PROMO; i++) {
		printf("Note de l'étudiant %d : ", i);
		scanf_s("%f", promo + i);
		moyPro += promo[i];
	}
	moyPro /= TAILLE_PROMO;
	
	for (int i = 1; i < TAILLE_PROMO; i++) {
		if (promo[indiceBest] < promo[i]) {
			indiceBest = i;
		}
		if (promo[indiceWorst] > promo[i]) {
			indiceWorst = i;
		}
	}
	for (int i = 1; i <= NB_GROUPES; i++) {
		for (int y = 0; y < NB_ELEVE_GROUPE; y++) {
			switch (i) {
			case 1:moyG1 += promo[y]; break;
			case 2:moyG2 += promo[y+3];  break;
			case 3:moyG3 += promo[y+6]; break;
			}
		}
	}
	moyG1 /= NB_ELEVE_GROUPE;
	moyG2 /= NB_ELEVE_GROUPE;
	moyG3 /= NB_ELEVE_GROUPE;
	printf("meilleur note : %f -> etudiant %d\n", promo[indiceBest], indiceBest);
	printf("pire note : %f -> etudiant %d\n", promo[indiceWorst], indiceWorst);
	printf("moyenne = %f\n", moyPro);
	printf("moyenneG1 = %f\n", moyG1);
	printf("moyenneG2 = %f\n", moyG2);
	printf("moyenneG3 = %f\n", moyG3);

}*/
 
// fonctions et tableaux
/*void fusion_simple(double dest[], double src1[], double src2[], int l) {
	int y;
	int i;
	for (i = 0,y = 0; y < l; i += 2, y++) {
		dest[i] = src1[y];
		dest[i + 1] = src2[y];
	}
	for (int i = 0; i < l * 2; i++) {
		printf("%f - ", dest[i]);
	}
}*/

/*void fusion_tri(double dest[], double src1[], int l1, double src2[], int l2) {
	int saveTab1 = 0;
	int saveTab2=0;
	for (int i = 0; i < l1 + l2; i++) {
		if (src1[saveTab1] >= src2[saveTab2] || (saveTab1 >= l1 && saveTab2 < l2)) {
			dest[i] = src2[saveTab2];
			saveTab2 += 1;
		}
		else {
			dest[i] = src1[saveTab1];
			saveTab1 += 1;
		}
	}
	printf("[ ");
	for (int i = 0; i < l1+l2; i++) {
		printf("%f, ", dest[i]);
	}
	printf(" ]");
}*/

/*#include <stdio.h>
#include <math.h>
int taille_sequence(int tab[], int l) {
	int plusLongueSeq = 0;
	int tempo = 1;
	for (int i = 1; i < l; i++) {
		if (tab[i] == tab[i - 1]) {
			tempo += 1;
		}
		else {
			if(tempo>=plusLongueSeq)
				plusLongueSeq = tempo;
			tempo = 1;
		}
	}
	if (tempo >= plusLongueSeq) {
		plusLongueSeq = tempo;
	}
	return plusLongueSeq;
}*/

/*int versus(int tab1[], int l1, int tab2[], int l2) {
	int score = 0;
	int taille = l1;
	if (l1 != l2) {
		score += abs(l2 - l1);
		taille = l2 < l1 ? l2 : l1;
	}
	for (int i = 0; i < taille; i++) {
		if (tab1[i] > tab2[i]) {
			score += 1;
		}
		else if (tab2[i] > tab1[i]) {
			score -= 1;
		}
	}
	return score;
}

int main() {
	//double dest[11];
	double src1[] = { 1.0, 2.0, 5.0, 6.0, 6.8 };
	double src2[] = { 0.0, 2.0, 4.0, 7.0, 9.0, 11.0};

	int tab1[] = { 1, 2, 5, 6, 6,9,8,7,6,5};
	int tab2[] = { 0, 2, 4, 7, 9, 11 };

	int tabseq[] = { 3,5,5,5,7,9,12,2, 4, 1, 6, 6, 6, 6, 85, 10, 6 };
	//fusion_simple(dest, src1, src2, 5);
	//fusion_tri(dest, src1, 5, src2, 6);
	//printf("la plus longue séquence contigues = %d",taille_sequence(tabseq, 17));
	printf("%d", versus(tab1, 10, tab2, 6));
	return 0;
}*/

//arithmetique multi-précision 

#include <stdio.h>
#define SIZETAB 100

int number_length(char b[], int lb) {

}

int main() {
	int nombre;
	
	char tab[SIZETAB];
	printf("entrez votre nombre : ");
	scanf_s("%d", &nombre);
	unsigned int reste = nombre;
	int indice = 0;
	while (reste && indice < 100) 
	{
		char result = reste % 100;
		printf("%02d = %d\n",result, reste % 100);
		tab[indice] = result;
		indice++;
		reste = reste - result;
		reste /= 100;
	}
	printf("indice, %d\n", indice);
	for (int i = indice-1; i>=0; i--) {
		printf("%02d - ", tab[i]);
	}
}