#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void swap(int* val1, int* val2) {
	int save;
	save = *val1;
	*val1 = *val2;
	*val2 = save;
}


char* saisie_liste_num_etudiant() {
	char* liste_num_etudiant = NULL;
	int entry = 0;
	int number = 0;
	do {
		printf("Souhaitez vous entrez un nouveau numéro d'etudiant (Non: 0, 1: Oui)?\n");
		scanf("%d", &entry);
		if (entry) {
			// \0 needed at the end -> + 1,
			// the size we want is also 1 in front of the variable number.
			liste_num_etudiant = (char*)realloc(liste_num_etudiant, ((number + 1) * 9 + 1) * sizeof(char));

			scanf("%s", &liste_num_etudiant[9 * number]);
			printf("%s", liste_num_etudiant);
			number++;
		}
	} while (entry);
	printf("%s", liste_num_etudiant);
	return liste_num_etudiant;
}

char* substring(char* main_string, const char* word) {
	int found = 0;
	int i = 0;
	size_t wordSize = strlen(word);
	while (main_string[i] != '\0' && !found) {
		if (strncmp(&main_string[i], word, wordSize) == 0) {
			found = 1;
		}
		i++;
	}

	return found ? &main_string[i - 1] : NULL; // if found -> return the string at the right index, else return NULL
}

int reverse_bulle(int* tab, int l) {
	int swapped = 0;
	int indexMin = 0;
	int min = tab[indexMin];
	for (int i = 0; i < l; i++) {
		if (tab[i] < min) {
			indexMin = i;
			min = tab[indexMin];
			swapped = 1;
		}
	}
	swap(tab + indexMin, tab);
	return swapped;
}

void reverse_tri_bulle(int* tab, int l) {
	for (int i = 0; i < l; i++) {
		reverse_bulle(tab + i, l - i);
	}
	for (int i = 0; i < l; i++) {
		printf("%d - ", tab[i]);
	}
}

int main() {
	char texte[] = "Ce texte servira d'exemple pour l'exercice sur l'arithmetique des pointeurs et les chaines de caracteres."
		" Cet exemple permet aussi de rappeler qu'un pointeur sur un caractere d'une chaine permet immediatement de definir"
		" une sous chaine qui commence par le caractere dont le pointeur est l'adresse.";
	printf("Part 1\n\n");
	saisie_liste_num_etudiant();
	printf("\n\n\nPart 2 \n\n");
	printf("%s\n\n", substring(texte, "aussi"));
	int tab[] = { 3,4,1,4,6,100 };
	reverse_tri_bulle(tab, 6);
}