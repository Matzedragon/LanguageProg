
#include <stdio.h>
#include <stdlib.h>


typedef struct {
	int num_etudiant;
	double* notes;
	double* coeff;
	double moyenne;
	int nb_notes;
	int somme_coeff;
} releve;


/********************* EXERCICE 4 ***************************************************************************/
/*************************** Question 1 ***********************************/

void init_releve(releve* pr, int num_etudiant) {
	pr->num_etudiant = num_etudiant;
	pr->notes = NULL;
	pr->coeff = NULL;
	pr->moyenne = 0;
	pr->nb_notes = 0;
	pr->somme_coeff = 0;
}

/*************************** Question 2 ***********************************/
void affiche_releve(releve* pr) {

	printf("Numero etudiant : %d\n", pr->num_etudiant);
	for (int i = 0; i < pr->nb_notes; i++) {
		printf("note : %lf coeff : %lf\n", pr->notes[i], pr->coeff[i]);
	}
	printf("moyenne : %lf\n", pr->moyenne);

}


/*************************** Question 3 ***********************************/

void ajouter_note(releve* pr, double note, double coef) {
	double moyenne = 0;
	if (pr->nb_notes == 0) {
		pr->notes = (double*)malloc(sizeof(double));
		pr->coeff = (double*)malloc(sizeof(double));
	}
	else {
		pr->notes = (double*)realloc(pr->notes, (pr->nb_notes + 1) * sizeof(double));
		pr->coeff = (double*)realloc(pr->coeff, (pr->nb_notes + 1) * sizeof(double));
	}
	pr->notes[pr->nb_notes] = note;
	pr->coeff[pr->nb_notes] = coef;
	pr->nb_notes++;
	for (int i = 0; i <= pr->nb_notes; i++) {
		moyenne += pr->notes[i] * pr->coeff[i];

	}
	pr->somme_coeff += coef;
	pr->moyenne = moyenne / pr->somme_coeff;
}





/*************************** Question 4 ***********************************/
void detruire_releve(releve* r) {
	free(r->notes);
	free(r->coeff);
}


/***************************** Questions BONUS *****************************/


void save(releve* pr, char* path) {
	/*Compléter ci-dessous*/

}


releve* load_student(char* path) {
	/*Compléter ci-dessous*/

	return NULL; //à effacer

}


void retirer_note(releve* pr, int indice_note) {
	/*Compléter ci-dessous*/

}


int main() {
	releve r, r2, r3;
	init_releve(&r, 90001);
	init_releve(&r2, 90002);
	init_releve(&r3, 90003);

	ajouter_note(&r, 16, 3);
	ajouter_note(&r, 11, 4);
	ajouter_note(&r, 9, 3);
	ajouter_note(&r, 14, 5);
	affiche_releve(&r);

	ajouter_note(&r2, 10, 3);
	ajouter_note(&r2, 9, 4);
	ajouter_note(&r2, 5, 3);
	affiche_releve(&r2);

	ajouter_note(&r3, 18, 3);
	ajouter_note(&r3, 19, 4);
	ajouter_note(&r3, 15, 3);
	ajouter_note(&r3, 15.5, 5);
	affiche_releve(&r3);

	detruire_releve(&r);
	detruire_releve(&r2);
	detruire_releve(&r3);
}
