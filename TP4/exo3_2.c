#include <stdio.h>
#include <stdlib.h>


/*Vous pouvez utiliser cette fonction pour afficher les tableaux obtenus*/
void affiche_tab(double* tab, int l){
    int i;
    printf("[");
    for(i=0; i<l-1; i++){
        printf("%lg, ",tab[i]);   
    }    
    printf("%lg]\n",tab[l-1]);
}


int main(){

    /*Question 2 de l'exercice 3 à écrire ici*/
    double* tableau;
    tableau = (double*)malloc(sizeof(double));
    double val = 0;
    int taille = 0;
    do {
        printf("Entrez une nouvelle valeur positive (negative pour quitter)\n");
        scanf("%lf", &val);
        if (val >= 0) {
            taille++;
            tableau = (double*)realloc(tableau, taille * sizeof(double));
            tableau + taille - 1 = val; // dernière position du tableau
        }
    } while (val >= 0);
    affiche_tab(tableau, taille);
    return EXIT_SUCCESS;
}
