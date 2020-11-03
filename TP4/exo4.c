#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int num_etudiant;
    double* notes;
    double* coeff;
    double moyenne;
    int nb_notes;
    int somme_coeff;
} releve;


/********************* EXERCICE 4 ***************************************************************************/
/*************************** Question 1 ***********************************/

void init_releve(releve* pr, int num_etudiant){
/*Compléter ci-dessous*/

}

/*************************** Question 2 ***********************************/
void affiche_releve(releve* pr){
    
/*Compléter ci-dessous*/

}


/*************************** Question 3 ***********************************/

void ajouter_note(releve* pr, double note, double coef){
 
/*Compléter ci-dessous*/

}





/*************************** Question 4 ***********************************/
void detruire_releve(releve* r){
/*Compléter ci-dessous*/

}


/***************************** Questions BONUS *****************************/


void save(releve* pr, char* path){
/*Compléter ci-dessous*/

}


releve* load_student(char* path){
/*Compléter ci-dessous*/

    return NULL; //à effacer

}


void retirer_note(releve* pr, int indice_note){
/*Compléter ci-dessous*/

}


int main(){
    releve r,r2,r3;
    init_releve(&r,90001);
    init_releve(&r2,90002);
    init_releve(&r3,90003);

    ajouter_note(&r,16,3);
    ajouter_note(&r,11,4);
    ajouter_note(&r,9,3);
    ajouter_note(&r,14,5);
    affiche_releve(&r);
    
    ajouter_note(&r2,10,3);
    ajouter_note(&r2,9,4);
    ajouter_note(&r2,5,3);
    affiche_releve(&r2);
    
    ajouter_note(&r3,18,3);
    ajouter_note(&r3,19,4);
    ajouter_note(&r3,15,3);
    ajouter_note(&r3,15.5,5);
    affiche_releve(&r3);   
    

}
