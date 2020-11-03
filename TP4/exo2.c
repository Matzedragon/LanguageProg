#include <stdio.h>
#include <stdlib.h>
#include <string.h> // pour strlen, stncmp
#include <ctype.h> // pour toupper



/*Question 1*/
char* find_word(char* text, char* word){
    int i = 0;
    int save = 0;
    while (text[i] != '\0') {
        if (text[i] == ' ') {
            printf("%.*s\n",save, text + i);
            if (strncmp(text+i, word, save) == 0) {
                return text + i - save;
            }
            save = 0;
        }
        save++;
        i++;
    }
    return text;
    /*Compléter ci-dessous*/
    //return "";//effacer cette ligne
}


/*Question 2*/
void capitalize_word(char* text, char* word){
/*Compléter ci-dessous*/
    
}


/*Question 3*/
int word_occurrences(char* text, char* word){
/*Compléter ci-dessous*/

    return 0; //effacer cette ligne
}



int main(){
    char texte[] = "Ce texte servira d'exemple pour l'exercice sur l'arithmetique des pointeurs et les chaines de caracteres."
    " Cet exemple permet aussi de rappeler qu'un pointeur sur un caractere d'une chaine permet immediatement de definir" 
    " une sous chaine qui commence par le caractere dont le pointeur est l'adresse.";
 
    
    printf("find_word(texte,\"%s\"):\n","aussi");
    printf("%s\n\n",find_word(texte,"aussi"));
    
    printf("find_word(texte,\"%s\"):\n","dont");
    printf("%s\n\n",find_word(texte,"dont"));
    
    printf("word_occurrences(texte,\"%s\"): %d\n","chaine", word_occurrences(texte,"exemple"));
    printf("word_occurrences(texte,\"%s\"): %d\n","pointeur", word_occurrences(texte,"pointeur"));
    
    printf("\ncapitalize_word(texte,\"%s\"):\n","exemple");
    capitalize_word(texte,"exemple");
    printf("%s\n",texte);

}
