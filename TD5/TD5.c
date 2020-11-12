//TD 5
#include <stdlib.h>
#include <stdio.h>
/*void swap(int* val1, int* val2) {
	int save;
	save = *val1;
	*val1 = *val2;
	*val2 = save;
}
int string_length(char* s) {
	int size = 0;
	while (*s++ != '\0') {
		printf("%c", *s);
		size++;
	}
	
	return size;
}

double meilleur_chrono(athlete* a) {
	int i = 1;
	double max = a->chronos[0];
	while (a->chronos[i] != 0) {
		if (a->chronos[i] < max)
			max = a->chronos[i];
		i++;
	}
	return max;
}
// Q4 de l'EXO 1 si on passe directement un athlete en argument ça créer une copie de l'objet alors qu'un pointeur
// pointe direct sur l'objet, donc on divise la place dans la mémoire par deux.

// EX 2 - 4 dans le main, EX 3 dans le fichier excel

//Arithmétique des pointeurs
// EX 5*/
double* alloc_double(double n) {
	int i = 1;
	int j = n;
	double* pr;
	pr = (double*)malloc(n* sizeof(double));
	while (j > 0) {
		if (i % 2) {
			pr[j-1] = i;
			j--;
		}
		i++;
	}
	return pr;
}

double* concat(double * tab1, int taille1, double* tab2, int taille2) {
	int i;
	int j;
	double* concatened = (double*)malloc((taille1 + taille2) * sizeof(double));
	for (i= 0; i < taille1; i++) {
		concatened[i] = tab1[i];
	}
	for (j = 0; j < taille2; j++,i++) {
		concatened[i] = tab2[j];
	}
	return concatened;
}

void exo3(double** tab1, int taille1, double* tab2, int taille2) {
	int i;
	int j;
	int tailleTot = taille1 + taille2;
	*tab1 = (double*)realloc(*tab1, tailleTot * sizeof(double));
	
	for (i = taille1, j = 0; i < taille1+taille2; i++, j++) {
		(*tab1)[i] = tab2[j];
	}
	printf("%p adresse après realloc dans méthode\n", tab1);
}


int main() {

	int val1 = 12;
	int val2 = 13;
	char tab[] = "string test";
	char* s = tab;
	// EX 1
	/*swap(&val1, &val2);
	printf("val1 = %d, val2 = %d\n", val1, val2);
	printf("stringlength = %d\n", string_length(s));

	// EX 2
	char T[] = { 20,67,10,1,0,6,34,56,98,45,12 };
	char* p = T;*/
	//T[5] = 6,		T+5 = 105,	&p[2] = 102,	 *T+5 = 6,		*(T+5) = 6,		&T = 100,	&p = 100,	p+(*p+1) = 119,		*(T) * *(T+2)-T[3] = 199

	// EX 4 Exemples de codes
	
	/*int a = 7;
	printf("valeur de l'entier a: %d",&a);
	-> faux -> affiche l'adresse
	 
	int bret[4] ={22,29,35,56};
	printf("4eme departement : %d",bret[4]);
	-> bret[4] -> overflow 
	 
	double pdouble = (double) malloc (sizeof(double)); 
	-> Il faut que ce soit un pointeur, malloc renvoie une adresse ->  double* pdouble = (double*) malloc (sizeof(double));

	double* p1, p2;
	p1 = &p2;
	-> marche mais p2 undeterminé

	int* p3;
	int t[3]={2,4,8};
	p3 = t; 
	-> fonctionne

	int t2[5],*p4;
	p4 =(int) malloc(5*sizeof(int));
	t2=p4; 
	-> marche pas, p4 est un poiteur et on cast un int

	 */

	//EX 5
	//Fonction et allocation dynamique
	double* pointeur;
	double* pointeur2;
	double* resultexo2;
	double taille = 13.0;
	pointeur = alloc_double(taille);
	pointeur2 = alloc_double(taille*2);


	printf("EXO1\n");
	for (int i = 0; i < taille; i++) {
		printf("%f - ", pointeur[i]);
	}
	printf("\n\nEXO1 2 eme tab\n");
	for (int i = 0; i < taille*2; i++) {
		printf("%f - ", pointeur2[i]);
	}
	printf("\n\nEXO2\n");
	resultexo2 = concat(pointeur, taille, pointeur, taille);
	for (int i = 0; i < taille*2; i++) {
		printf("%f - ", resultexo2[i]);
	}

	printf("\n\nEXO 3\n");
	printf("%p adresse pointeur avant\n", pointeur); // test only
	exo3(&pointeur, taille, pointeur2, taille*2);
	printf("%p adresse pointeur après \n\n", pointeur);

	for (int i = 0; i < taille * 3; i++) {
		printf("%f - ", pointeur[i]);
	}
}