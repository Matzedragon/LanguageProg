#include <stdio.h>
#include <stdlib.h>
#include <string.h> // pour strlen, stncmp
#include <ctype.h> // pour toupper



/*Question 1*/
char* find_word(char* text, const char* word) {
	int i = 0;
	int save = 0;
	while (text[i] != '\0' && save < strlen(word)) {
		// vérifie char par char avec une sauvegarde
		if (text[i] == word[save]) {
			save++;
		}
		else {
			save = 0; // si la lettre ne correspond pas on reset
		}
		i++;
	}
	if (save == strlen(word)) {
		return text + i-save;
	}
	return text;
}


/*Question 2*/
void capitalize_word(char* text, const char* word) {
	char* tempo = find_word(text, word); // on récup le début de l'occurence avec le word
	for (int i = 0; i < strlen(word); i++) {
		*(tempo+i) = toupper(*(tempo + i)); // on met en majuscule à l'adresse pointé à partir de la première occurence du word jusqu'à sa taille
		// ==> tempo[i] = toupper(tempo[i]);
	}
}


/*Question 3*/
int word_occurrences(char* text, const char* word) {
	char* tempo = find_word(text,word);
	char* save = text;
	int occur = 0;
	while (save != tempo) {
		occur++;
		save = tempo + strlen(word);
		tempo = find_word((tempo+strlen(word)), word);
	}
	return occur;
}



int main() {
	char texte[] = "Ce texte servira d'exemple pour l'exercice sur l'arithmetique des pointeurs et les chaines de caracteres."
		" Cet exemple permet aussi de rappeler qu'un pointeur sur un caractere d'une chaine permet immediatement de definir"
		" une sous chaine qui commence par le caractere dont le pointeur est l'adresse.";

	//ex1
	printf("find_word(texte,\"%s\"):\n", "aussi");
	printf("%s\n\n", find_word(texte, "aussi"));

	printf("find_word(texte,\"%s\"):\n", "dont");
	printf("%s\n\n", find_word(texte, "dont"));

	//ex2
	printf("word_occurrences(texte,\"%s\"): %d\n", "chaine", word_occurrences(texte, "exemple"));
	printf("word_occurrences(texte,\"%s\"): %d\n", "pointeur", word_occurrences(texte, "pointeur"));

	//ex3
	printf("\ncapitalize_word(texte,\"%s\"):\n", "exemple");
	capitalize_word(texte, "exemple");
	printf("%s\n", texte);

}
