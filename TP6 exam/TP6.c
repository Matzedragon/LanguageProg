#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*EXERCICE 1*/
void affiche_quadrant(int c) {
	int place = 0;
	for (int i = 0; i < c; i++) {
		for (int y = 0; y < c; y++) {
			//// si on est dans la première moitié gauche ou dans la deuxième moitié droite.
			if ((y < c / 2 && i < c / 2) || (y >= c / 2 && i >= c / 2)) { 
				printf(" . ");
			}
			else {
				printf(" 0 ");
			}
		}
		printf("\n");
	}
}

/*EXERCICE 2*/
char* symetrique(char* text) {
	int taille = strlen(text);
	char* chaine = (char*)malloc(taille * 2 * sizeof(char) + 1);
	strcpy(chaine, text);
	for (int i = taille - 1; i >= 0; i--) {
		chaine[taille + (taille - i) - 1] = text[i];
	}
	chaine[taille * 2] = '\0';
	return chaine;
}

/*EXERCICE 3*/
int* occurrences_interval(char* text, char min, char max) {
	int taille = max == min ? 1 : 26;
	int* occurences = (int*)calloc(taille, sizeof(int));
	char tempo;
	for (int i = 0; i < strlen(text); i++) {
		tempo = tolower(text[i]);
		if (tempo >= min && tempo <= max && taille != 1) {
			occurences[tempo - 97]++;
		}
		else if (tempo == min) {
			occurences[0]++;
		}
	}
	return occurences;
}

/*EXERCICE 4*/
int** faire_drapeau(int l) {
	int** drapeaux = (int**)malloc(l * sizeof(int*));
	int etage = 10;
	for (int i = 0; i < l; i++) {
		drapeaux[i] = (int*)malloc(i + 1 * sizeof(int));
		for (int y = 0; y < ((i % 4) + 1); y++) {
			drapeaux[i][y] = etage;
			etage++;
		}
	}
	return drapeaux;
}

/*Fonction de Test utilisée dans le main pour la question 4, avec l=4, ne pas modifier*/
void affiche_drapeau4(int** M) {
	if (M == NULL) { printf("fonction faire_drapeau à faire\n"); return; }
	printf("%d ", M[0][0]); printf("\n");
	printf("%d ", M[1][0]); printf("%d ", M[1][1]); printf("\n");
	printf("%d ", M[2][0]); printf("%d ", M[2][1]); printf("%d ", M[2][2]); printf("\n");
	printf("%d ", M[3][0]); printf("%d ", M[3][1]); printf("%d ", M[3][2]); printf("%d ", M[3][3]); printf("\n");
}


/*Fonction de Test utilisée dans le main pour la question 4, avec l=8, ne pas modifier*/
void affiche_drapeau8(int** M)
{
	if (M == NULL)
	{
		printf("fonction faire_drapeau à faire\n");
		return;
	}
	printf("%d ", M[0][0]);
	printf("\n");
	printf("%d ", M[1][0]);
	printf("%d ", M[1][1]);
	printf("\n");
	printf("%d ", M[2][0]);
	printf("%d ", M[2][1]);
	printf("%d ", M[2][2]);
	printf("\n");
	printf("%d ", M[3][0]);
	printf("%d ", M[3][1]);
	printf("%d ", M[3][2]);
	printf("%d ", M[3][3]);
	printf("\n");
	printf("%d ", M[4][0]);
	printf("\n");
	printf("%d ", M[5][0]);
	printf("%d ", M[5][1]);
	printf("\n");
	printf("%d ", M[6][0]);
	printf("%d ", M[6][1]);
	printf("%d ", M[6][2]);
	printf("\n");
	printf("%d ", M[7][0]);
	printf("%d ", M[7][1]);
	printf("%d ", M[7][2]);
	printf("%d ", M[7][3]);
	printf("\n");
}

/*Fonction de Test utilisée dans le main pour la question 4, avec l=16, ne pas modifier*/
void affiche_drapeau16(int** M) {
	if (M == NULL) { printf("fonction faire_drapeau à faire\n"); return; }
	printf("%d ", M[0][0]); printf("\n");
	printf("%d ", M[1][0]); printf("%d ", M[1][1]); printf("\n");
	printf("%d ", M[2][0]); printf("%d ", M[2][1]); printf("%d ", M[2][2]); printf("\n");
	printf("%d ", M[3][0]); printf("%d ", M[3][1]); printf("%d ", M[3][2]); printf("%d ", M[3][3]); printf("\n");
	printf("%d ", M[4][0]); printf("\n");
	printf("%d ", M[5][0]); printf("%d ", M[5][1]); printf("\n");
	printf("%d ", M[6][0]); printf("%d ", M[6][1]); printf("%d ", M[6][2]); printf("\n");
	printf("%d ", M[7][0]); printf("%d ", M[7][1]); printf("%d ", M[7][2]); printf("%d ", M[7][3]); printf("\n");
	printf("%d ", M[8][0]); printf("\n");
	printf("%d ", M[9][0]); printf("%d ", M[9][1]); printf("\n");
	printf("%d ", M[10][0]); printf("%d ", M[10][1]); printf("%d ", M[10][2]); printf("\n");
	printf("%d ", M[11][0]); printf("%d ", M[11][1]); printf("%d ", M[11][2]); printf("%d ", M[11][3]); printf("\n");
	printf("%d ", M[12][0]); printf("\n");
	printf("%d ", M[13][0]); printf("%d ", M[13][1]); printf("\n");
	printf("%d ", M[14][0]); printf("%d ", M[14][1]); printf("%d ", M[14][2]); printf("\n");
	printf("%d ", M[15][0]); printf("%d ", M[15][1]); printf("%d ", M[15][2]); printf("%d ", M[15][3]); printf("\n");
}

/*Ce main permet d'obtenir la trace d'éxecution fournie dans le sujet.
Il n'y a pas besoin de le modifier pour tester vos programmes.*/
int main()
{
	affiche_quadrant(10);
	printf("\n");

	printf("Résultat de symetrique(%s) : %s\n", "Alphabet", symetrique("Alphabet"));
	printf("\n");

	char texte[] = "Ce texte permet de tester si la fonction occurences_interval marche bien.";
	//une seule lettre dans l'intervalle (e)
	int* occ_e = occurrences_interval(texte, 'e', 'e');
	//6 lettres dans l'intervale (a,b,c,d,e,f)
	int* occ_af = occurrences_interval(texte, 'a', 'f');

	if (!occ_e) {
		printf("La fonction occurences_interval n'a pas été complétée\n\n");
	}
	else {
		printf("occurrences de la lettre e:%d\n", occ_e[0]);
		printf("occurrences entre a et f:    a:%d b:%d c:%d d:%d e:%d f:%d \n",
			occ_af[0], occ_af[1], occ_af[2], occ_af[3], occ_af[4], occ_af[5]);
		printf("\n");
	}

	int** drapeau4 = faire_drapeau(4);
	int** drapeau8 = faire_drapeau(8);
	int** drapeau16 = faire_drapeau(16);
	if (!drapeau4) {
		printf("La fonction faire_drapeau n'a pas été complétée\n");
	}
	else {
		//Attention!! fonctionne uniquement avec drapeau4
		affiche_drapeau4(drapeau4);
		printf("\n");
		//Attention!! fonctionne uniquement avec drapeau4
		affiche_drapeau8(drapeau8);
		printf("\n");
		//Attention!! fonctionne uniquement avec drapeau16
		affiche_drapeau16(drapeau16);
	}

	return 0;
}