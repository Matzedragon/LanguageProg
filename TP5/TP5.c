//TP 5
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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

void affiche_matrice(int** M, int l, int c) {
	for (int i = 0; i < l; i++) {
		printf("{");
		for (int y = 0; y < c; y++) {
			printf("%6d ", M[i][y]);
		}
		printf("}\n");
	}
}

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

void changer_taille_matrice(int*** pM, int l, int c, int nl, int nc) {
	if (nl > l) {
		*pM = (int**)realloc(*pM, sizeof(int*) * nl);
		for (int i = l; i < nl; i++) {
			(*pM)[i] = (int*)malloc(sizeof(int) * nc);
			for (int y = 0; y < c; y++) {
				(*pM)[i][y] = -1;
			}
		}

	}


	if (c < nc) {
		for (int i = 0; i < nl; i++) {
			(*pM)[i] = (int*)realloc((*pM)[i], sizeof(int) * nc);
			for (int y = c; y < nc; y++) {
				(*pM)[i][y] = -1;
			}
		}
	}

}

int main() {
	int** tableau2D;
	tableau2D = make_matrix(5, 5);
	affiche_matrice(tableau2D, 5, 5);
	//effacer_matrice(tableau2D, 5, 5);
	changer_taille_matrice(&tableau2D, 5, 5, 10, 10);
	printf("\n\n");
	affiche_matrice(tableau2D, 10, 10);
	return 1;
}