//TD 6
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
// TP 5
void affiche_matrice(int** M, int l, int c) {
	for (int i = 0; i < l; i++) {
		printf("{");
		for (int y = 0; y < c; y++) {
			printf("%6d ", M[i][y]);
		}
		printf("}\n");
	}
}
//TP 5
int** make_matrix(int l, int c) {
	int** matrice;
	matrice = (int**)malloc(sizeof(int*) * l);
	int save = 0;
	for (int i = 0; i < l; i++) {
		matrice[i] = (int*)malloc(sizeof(int) * c);
		for (int y = 0; y < c; y++) {
			matrice[i][y] = save * 10;
			save++;
		}
	}
	return matrice;
}

// for tests
void affiche_matrice_string(char** M, int l) {
	int y = 0;
	printf("liste de mots :\n");
	for (int i = 0; i < l; i++) {
		while (M[i][y] != '\0') {
			printf("%c", M[i][y]);
			y++;
		}
		y = 0;
		printf("\n");
	}
}
//TP 5
void effacer_matrice(int** M, int l, int c) {
	for (int i = 0; i < l; i++) {
		for (int y = 0; y < c; y++) {
			M[i][y] = 0;
		}
	}
	for (int i = 0; i < l; i++) {
		free(M[i]);
	}
	free(M);
}

int** tab_to_matrix(int* tab, int l) {
	int lsquared = sqrt(l);
	int** tableau;
	tableau = (int**)malloc(lsquared * sizeof(int*));
	int save = 0;
	for (int i = 0; i < lsquared; i++) {
		tableau[i] = (int*)malloc(lsquared * sizeof(int*));
		for (int y = 0; y < lsquared; y++) {
			tableau[i][y] = tab[save];
			save++;
		}
	}
	return tableau;
}

char** create_word_list() {
	int nbrDeMot = 0;
	char** listeMots;
	printf("Combien de mots voulez vous entrer ? \n");
	scanf("%d", &nbrDeMot);
	listeMots = (char**)malloc(nbrDeMot * sizeof(char*));
	printf("Entrez %d mots : \n", nbrDeMot);
	for (int i = 0; i < nbrDeMot; i++) {
		listeMots[i] = (char*)malloc(50 * sizeof(char));
		scanf("%s", listeMots[i]);
	}
	return listeMots;
}

int** make_triangle(int n) {
	int** triangle;
	triangle = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++) {
		triangle[i] = (int*)calloc(i + 1, sizeof(int));
	}
	return triangle;
}
//tests
void affiche_triangle(int** triangle, int taille) {
	for (int i = 0; i < taille; i++) {
		for (int y = 0; y < i + 1; y++) {
			printf("%6d", triangle[i][y]);
		}
		printf("\n");
	}
}

void fill_triangle(int** T, int n) {
	for (int i = 0; i < n; i++) {
		T[i][0] = 1; // c'est la première colonne, donc = 1;
											// la première colonne = 1 donc on commence à la deuxième
		for (int y = 1; y < i; y++) {		// et donc on finit avant la dernière colonne de la ligne
			T[i][y] = T[i - 1][y - 1] + T[i - 1][y];
		}
		T[i][i] = 1; // dernière colonne de la ligne = 1
	}
}

int** make_symm(int** T, int n) {
	int** M;
	M = make_matrix(n, n);

	for (int i = 0; i < n; i++) {
		for (int y = 0; y < n; y++) {
			M[i][y] = T[i][y]; // copie de T dans M
		}
	}
	for (int i = 1; i < n; i++) {
		for (int y = 0; y < i; y++) {
			M[y][i] = T[i][y];
		}
	}
	return M;
}

int main() {
	int tab[9] = { 1,2,3,4,5,6,7,8,9 };
	int** table;
	char** tableMots;
	int tailleTriangle = 6;

	/*table = tab_to_matrix(tab, 9);
	affiche_matrice(table, 3, 3);*/
	/*tableMots = create_word_list();
	affiche_matrice_string(tableMots, 3);
	effacer_matrice(table, 3, 3);*/
	table = make_triangle(tailleTriangle);
	fill_triangle(table, tailleTriangle);
	affiche_triangle(table, tailleTriangle);
	printf("\n\n");
	affiche_matrice(make_symm(table, tailleTriangle), tailleTriangle, tailleTriangle);
	return 1;
}
