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

    /*Question 1 de l'exercice 3 à écrire ici*/
    
    return EXIT_SUCCESS;
}
