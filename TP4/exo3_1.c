#include <stdio.h>
#include <stdlib.h>


/*Vous pouvez utiliser cette fonction pour afficher les tableaux obtenus*/
void affiche_tab(double* tab, int l) {
	int i;
	printf("[");
	for (i = 0; i < l - 1; i++) {
		printf("%lg, ", tab[i]);
	}
	printf("%lg]\n", tab[l - 1]);
}


int main() {

	/*Question 1 de l'exercice 3 à écrire ici*/
	double n;
	double* tableau;
	int i;
	printf("Combien de valeurs à entrer ? \n");
	scanf("%lf", &n);
	tableau = (double*)malloc(n * sizeof(double));
	for (i = 0; i < n; i++) {
		printf("Valeur %d\n", i);
		scanf("%lf", tableau + i);
	}
	affiche_tab(tableau, n);
	return EXIT_SUCCESS;
}
