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

/*#include <stdio.h>
#define SIZETAB 5


int number_length(char b[], int lb) {
	int existe =0;
	// commencer par le poid fort du nombre quand la valeur est différente de 0
	//c'est le début du nombre donc on sait que le nombre va de i à 0
	for (int i = lb - 1; i > 0; i--) {
		if (b[i] != 0) {
			existe = i+1;
			break;
		}
	}
	return existe;
}

char addition(char a[], int la, char b[], int lb) {
	int retenue = 0;
	char retour;
	int tempo;
	int i;
	if (la < number_length(b, lb)) {
		retour = -1;
	}
	else {
		for (i = 0; i < lb; i++) {
			tempo = (a[i] + b[i] + retenue);
			// si a[i] + b[i] + retenue ( = 0 ou 1) est supé à 100 alors initialise la retenue et on enlève 100 à tempo
			if (tempo >= 100) {
				retenue = 1;
				a[i] = (tempo - 100);
			}
			// sinon a[i] = a[i] + b[i]
			else {
				a[i] = tempo;
				retenue = 0;
			}
		}
		if (retenue == 1 && i<la) {
			a[i+1] + retenue;
			retenue = 0;
			
		}
		if(retenue ==1) {
			retour = 0;
		}
		else {
			retour = 1;
		}
	}
	printf("\n resultat addition : ");
	for (int i = la-1; i >= 0; i--) {
		printf("%02d - ", a[i]);
	}
	return retour;
}

int compare(char a[], int la, char b[], int lb) {
	int retour = 0;
	int Minsize = la >= lb ? lb : la;
	if (number_length(a, la) > number_length(b, lb)) {
		return 1;
	}
	for (int i = 0; i < Minsize; i++) {
		if (a[i] != b[i]) {
			retour = -1;
			break;
		}
	}
	return retour;
}

int main() {
	int nombre;
	char tab[SIZETAB];
	char test[] = { 00,00,13,15,16 };
	printf("entrez votre nombre : ");
	scanf_s("%d", &nombre);
	unsigned int reste = nombre;
	int indice = 0;
	for (int i = 0; i < SIZETAB; i++) {
		tab[i] = 00;
	}
	while (reste && indice < 100)
	{
		char result = reste % 100;
		printf("%02d = %d\n",result, reste % 100);
		tab[indice] = ("%02d",result);
		indice++;
		reste = reste - result;
		reste /= 100;
	}
	printf("indice, %d\n", indice);
	for (int i = SIZETAB-1; i>=0; i--) {
		printf("%02d - ", tab[i]);
	}
	printf("\ntaille = %d ",number_length(tab, SIZETAB));
	printf("\nresult addition : %d", addition(tab, SIZETAB, tab, SIZETAB));
	printf("\nresult compare : %d supposé = 1 car test > tab", compare( test, 5, tab, SIZETAB));
	printf("\nresult compare : %d supposé = -1 car tab != test et pas >", compare(tab, SIZETAB, test, 5 ));
	printf("\nresult compare : %d supposé = 0 car tab = tab", compare(tab, SIZETAB, tab, SIZETAB));
}*/

// TD 3

/*#include <stdio.h>
#include <string.h>
#include < ctype.h>*/
//Fonctions sur les caractères
/*int char_to_int(char c) {
	if (c >= '0' && c <= '9') {
		return c - 48;
	}
	return -1;
}

int alpha_rank(char c) {
	if (isalpha(c)) {
		return toupper(c) - 64;
	}
	return -1;
}

int main() {
	printf("alpha rank de c : %d\n", alpha_rank('c'));
	printf("alpha rank de D : %d\n", alpha_rank('D'));
	printf("alpha rank de z : %d\n", alpha_rank('z'));
	printf("alpha rank de Z : %d\n", alpha_rank('Z'));
	printf("alpha rank de '5' : %d\n", alpha_rank('5'));

}*/
/*#include <string.h>
#include <stdio.h>
void concat_n(char dest[], char src[], int n) {
	char currentChar;
	size_t i = -1;
	int y = 0;
	// permet de connaitre à partir de quel index de dest il faut concatener ( avant \0)
	i = strlen(dest);
	while (src[y] != '\0' && y<n) {
		dest[i] = src[y];
		i++; y++;
	}
	dest[i] = '\0';
}
// corrected
void filter(char input[], char filter_me) {
	int i = 0;
	int j = 0;
	char curChar;
	while ((curChar = input[i]) != '\0') {
		if (curChar != filter_me) {
			input[j] = input[i];
			j++;
		}
		i++;
	}
	input[j] = '\0';
}

int main() {
	char dest[256] = "Boonjour!";
	char src[] = "Au revoir!";
	char test1[] = "0123456789";
	char test2[] = "ABCDEFGHIJKLMNO";
	concat_n(dest, src, 60);
	printf("%s\n", dest);
	concat_n(dest, test1, 5);
	printf("%s\n", dest);
	concat_n(dest, test2, 6);
	printf("%s\n", dest);
	//filter
	printf("%s\n", dest);
	filter(dest, '!');
	printf("%s\n", dest);
	filter(dest, 'o');
	printf("%s\n", dest);
}*/

/*#include <string.h>
#include <stdio.h>
#include <ctype.h>
void letter_occurrences(char in_txt[], char occ[]) {
	int temp;
	for (int i = 0; in_txt[i] != '\0'; i++) {
		temp= toupper(in_txt[i]) - 'A';
		if (temp >= 0&& temp <=25)
			occ[temp] += 1;
	}
}

int check_password(const char passwd[]) {
	int correct = 0;
	int i = 0;
	int taillePwd = strlen(passwd);
	int countMaj = 0;
	int countMin = 0;
	int countNumber = 0;
	int alpha = 0;
	char curChar;
	if (taillePwd >= 10) {
		while ((countMaj==0 || countMin == 0 || countNumber == 0 || alpha == 0) && i < taillePwd) {
			curChar = passwd[i];
			if (curChar >= 'A' && curChar <= 'Z') {
				countMaj++;
			}
			else if (curChar >= 'a' && curChar <= 'z') {
				countMin++;
			}
			else if (curChar >= '0' && curChar <= '9') {
				countNumber++;
			}
			else if ((curChar >= 33 && curChar <= 47) || (curChar >= 60 && curChar <=63)) { // non alpha-numeric char
				alpha++;
			}
			i++;
		}
		if (countMaj != 0 && countMin != 0 && countNumber != 0 && alpha != 0)
			correct = 1;
	}
	return correct;
}

unsigned int string_to_uint(const char tab[]) {
	int result = 0;
	int puissance = 1;
	int i = strlen(tab)-1;// pour commencer au point faible du nombre, donc à la fin du tableau
	while (i>=0) {
		result += (tab[i] - 48) * puissance; // on mutliplie chaque nombre par la puissance actuelle et on l'ajoute au resultat
		i--;
		puissance *= 10; // la puissance augmente vu qu'on passe au prochaine caractère.
	}
	return result;
}
int main() {
	/*char alphabet[26] = {0};
	char test[] = "C\'est une courte phrase. Elle est en francais.";
	int i = 0;
	char c = 'a';
	letter_occurrences(test, alphabet);
	for (i = 0; i < 26; i++) {
		printf("%c: %d  ", c + i, alphabet[i]);
	}

	printf("*** CHECK PASSWORD***\n");
	printf("%s : %d\n", "Abd3?Qllzmp", check_password("Abd3?Qllzmp"));
	printf("%s : %d\n", "jgez?9A", check_password("jgez?9A"));
	printf("%s : %d\n", "AkfeLa?la", check_password("AkfeLa?la"));
	printf("%s : %d\n", "zerltnre?a988", check_password("zerltnre?a988"));
	printf("%s : %d\n", "AEKRO//923", check_password("AEKRO//923"));

	printf("%u %u %u \n", string_to_uint("325"), string_to_uint("0"), string_to_uint("946312"));
}*/

//Le mot le plus long
/*#include <string.h>
#include <stdio.h>
#include <ctype.h>
int longest_word(const char in_txt[], char out_word[]) {
	int longest = 0;
	int curTaille = 0;
	int index = 0;
	char curChar;
	int i;
	for ( i = 0; i < strlen(in_txt); i++) {
		curChar = in_txt[i];
		if (curChar != ' ') {
			curTaille++;
		}
		else {
			if (curTaille > longest) {
				longest = curTaille;			
				index = i-longest;
			}
			curTaille = 0;
		}
	}
	if (curTaille > longest) {
		longest = curTaille;
		curTaille = 0;
		index = i-longest;
	}
	for (int y = 0; y < longest; y++) {
		out_word[y] = in_txt[index + y];
	}
	out_word[longest] = '\0';
	return longest;
}

int main() {
	char dest [20];
	printf("Mot le plus long (taille : %d) = %s\n", longest_word("programming  language "
		"computer number cryptography   code  theory  processing system file", dest), dest);

	printf("Mot le plus long (taille : %d) = %s\n", longest_word("blue green red cyan "
		"orange yellow black white magenta", dest), dest);
}*/

// TP 2
/*#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

/***************** EXERCICE 1 ************************/

/*int nb_voyelles(char str1[]) {
	int nbVoyelles = 0;
	char voyelles[] = {'a','e','i','o','u','y'};
	int tailleVoyelles = 6;
	for (int i = 0; i < strlen(str1); i++) {
		for (int y = 0; y < tailleVoyelles; y++) {
			if (str1[i] == voyelles[y]) {
				nbVoyelles++;
				break;
			}			
		}
	}
	return nbVoyelles;
}

int compare(const char src1[],const char src2[]) {
	int difference = 0;
	int smaller = strlen(src1) < strlen(src2)? strlen(src1) : strlen(src2); // smaller value to not overflow

	char currentLower1;
	char currentLower2;

	for (int i = 0; i <smaller; i++) {
		// each current char in lowercase
		currentLower1 = tolower(src1[i]);
		currentLower2 = tolower(src2[i]);
		// if they are different we return the difference between them
		if (currentLower1 != currentLower2) {
			difference = currentLower1 - currentLower2;
			return difference;
		}
	}
	// if their size is different we return the character of the longest string at the index = smaller size of string 
	if (strlen(src1) < strlen(src2)) {
		difference = src2[strlen(src1)];
	}
	else if (strlen(src1) > strlen(src2)) {
		difference = src1[strlen(src2)];
	}
	// if no difference = 0
	return difference;
}


void verlan(char s[]) {
	char tempo;
	for (int i = 0; i < strlen(s)/2; i++) {
		tempo = s[strlen(s) - i-1];
		s[strlen(s) - i - 1] = s[i];
		s[i] = tempo;
	}
}

void generate_pwd(char newpwd[]) {
	int i;
	for (i = 0; i < 15; i++) {
		newpwd[i] = (rand() % 93) + 33; // 33 = '!' first printable char
	}
	newpwd[i] = '\0';
}

/********************** EXERCICE 2 *************************/

/*void repetition_code(char src[], char code[]) {
	int i, y;
	for (i = 0; i < strlen(src); i++) {
		for (y = 0; y < 3; y++) {
			code[i * 3 + y] = src[i];
		}
	}
	code[i * 3] = '\0';
}

int correction_code(char code[], char decode[]) {
	int i = 0;
	char tempo;
	int tempotest=0;
	for(i = 0; i<strlen(code)/3;i++){
		tempo = code[i * 3];
		if (tempo == code[i * 3 + 1] || tempo == code[i * 3 + 2]) {
			decode[i] = tempo;
		}
		else {
			if (code[i * 3 + 1] == code[i * 3 + 2]) {
				decode[i] = code[i * 3 + 1];
			}
			else {
				decode[i] = tempo;
			}
		}
	}
	decode[i] = '\0';
	return EXIT_SUCCESS;
}


int nombre_erreurs(char src[], char decodee[]) {
	int erreur = 0;
	int i = 0;
	while (src[i]!= '\0') {
		if (src[i] != decodee[i]) {
			erreur++;
		}
		i++;
	}
	return erreur;
}


/********************** EXERCICE 3******************************/


/*void delete_spaces(char src[], int i) {
	int nbrspace = 0;
	int j;
	while (src[i] != '\0') {
		j = i;
		while (src[j] == ' ') {
			nbrspace++;
			j++;
		}
		if (src[j] != '\0' && nbrspace > 1) {
			//aire un while
			for (int y = i; y < nbrspace; y++) {
				src[i + y] = src[i + nbrspace + y];
			}
		}
	}
}


/*int wordlist_format(char src[], int nc) {
	printf("TODO : wordlist_format\n");
	return EXIT_SUCCESS;
}


/********************** EXERCICE BONUS******************************/


/*void repetition_code_n(char src[], char code[], int n) {
	printf("TODO : repetition_code\n");
}


int majority(char code[], int i, int n) {
	printf("TODO : majority\n");
	return EXIT_SUCCESS;
}

int correction_code_n(char code[], char decode[], int n) {
	printf("TODO : correction_code_n\n");
	return EXIT_SUCCESS;
}*/




/*int main() {

	srand(time(NULL));
	char s1[] = "Programmation C";
	char pwd1[16], pwd2[16], pwd3[16];
	char list1[] = "Cette  phrase va  nous \t permettre de tester  la fonction wordlist_format";
	char msg[64] = "Cet exemple montre comment l'exercice 2 fonctionne.";
	char code[400], decode[400];
	int nb_indecodable, wcount;
	char test[] = "Un       exemple";
	char testeur[] = "Testeur";
	char Warning[] = "Warning";
	char cpp[] = "C++";


	printf("######## Tests Exercice 1#######\n\n");
	printf("Question 1\n\n");
	printf("Voyelles dans %s : %d\n", "Testeur", nb_voyelles(testeur));
	printf("Voyelles dans %s : %d\n", "Warning", nb_voyelles(Warning));
	printf("Voyelles dans %s : %d\n\n", "C++", nb_voyelles(cpp));

	printf("Question 2\n\n");
	printf("Comparaison de %s et %s : %d\n", "BoNJour", "bonjoUR", compare("BoNJour", "bonjoUR"));
	printf("Comparaison de %s et %s : %d\n", "BoNJur", "bonjoUR", compare("BoNJur", "bonjoUR"));
	printf("Comparaison de %s et %s : %d\n\n", "B", "bo", compare("B", "bo"));

	printf("Question 3\n\n");
	verlan(s1);
	printf("Verlan de Programmation C : %s\n\n", s1);

	printf("Question 4\n\n");
	generate_pwd(pwd1);
	generate_pwd(pwd2);
	generate_pwd(pwd3);
	printf("Mots de passe:\n%s\n%s\n%s\n\n", pwd1, pwd2, pwd3);

	printf("######## Tests Exercice 2#######\n\n");
	printf("\nQuestion 1\n\n");
	printf("Test code repetition\n\n");
	repetition_code(msg, code);
	printf("message original:\n%s\n\n", msg);
	printf("message avec code:\n%s\n\n", code);

	printf("\nQuestion 2\n\n");
	printf("Test correction code avec introduction de 7 erreurs \n\n");
	code[1] = '7';
	code[2] = '0';
	code[15] = 'Z';
	code[31] = '%';
	code[32] = '%';
	code[40] = ']';
	code[44] = '@';
	printf("code avec bruit:\n%s\n\n", code);
	nb_indecodable = correction_code(code, decode);
	printf("apres decodage (indecodable : %d) :\n%s\n\n", nb_indecodable, decode);
	printf("Nombre d'erreurs apres decodage: %d\n\n\n", nombre_erreurs(msg, decode));


	printf("\n######## Tests Exercice 3#######\n\n");
	printf("Chaine initiale: %s\n", test);
	delete_spaces(test, 3);
	printf("Espaces supprimés à partir de l'indice 3: %s\n", test);
	printf("%s\n", list1);
	/*wcount = wordlist_format(list1, 3);
	printf("Avec nc = 3 (%d mots):\n\n%s\n\n", wcount, list1);
	wordlist_format(list1, 4);
	printf("Avec nc = 4 (%d mots):\n\n%s\n\n", wcount, list1);


	//BONUS
	printf("######## Tests Exercice BONUS avec n=5#######\n\n");
	repetition_code_n(msg, code, 5);
	printf("codage :\n %s\n\n", code);
	code[1] = '7';
	code[2] = '0';
	code[15] = 'Z';
	code[31] = '%';
	code[32] = '%';
	code[40] = ']';
	code[44] = '@';
	nb_indecodable = correction_code_n(code, decode, 5);
	printf("message reçu avec erreurs:\n %s\n\n", code);
	printf("apres decodage (indecodable : %d) :\n%s\n\n", nb_indecodable, decode);
	printf("Nombre d'erreurs apres decodage: %d\n", nombre_erreurs(msg, decode));
	
	return 0;
}*/

// TD 4
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAILLENOM 64
struct athlete_struct {
	char nom[TAILLENOM];
	char prenom[TAILLENOM];
	char categorie;
	double chronos[256];
};

typedef struct athlete_struct athlete;

void formater_nom(char nom[]) {
	nom[0] = toupper(nom[0]);
	for (int i = 1; i < strlen(nom); i++) {
		nom[i] =tolower(nom[i]);
	}
}

athlete saisie_athlete() {
	athlete currentAthlete{};
	double chrono;
	int i = 0;
	int age;
	printf("veuillez entrer le nom de l'athlete : ");
	//scanf_s("%s", currentAthlete.nom); c'est juste mé ça marche pas lolol
	printf("\nveuillez entrer le prenom de l'athlete : ");
	//scanf_s("%s", currentAthlete.prenom); same as above
	printf("\nage : ");
	scanf_s("%d",&age);
	if (age < 14) currentAthlete.categorie = 'B';
	else if (age < 14) currentAthlete.categorie = 'J';
	else if (age < 14) currentAthlete.categorie = 'E';
	else currentAthlete.categorie = 'S';
	do {
		scanf_s("%f", &chrono);
		if (chrono > 0) {
			currentAthlete.chronos[i]= chrono;
			i++;
		}
	} while (chrono > 0);
	return currentAthlete;
}

