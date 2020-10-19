#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//longueur ligne maximale
#define S_MAX 512
//longueur tableau chemin fichier max 
#define PATH_MAX 512
// nombre lignes en tête PPM (P6)
#define HEADER_SIZE 4

void ppm_header_copy(FILE* infile,FILE* outfile){
//À modifier
}


int read_color(int rgb[], FILE* infile){
    //À modifier
    return 0;
}

void write_color(int rgb[], FILE* outfile){
//À modifier
}

void color_rgb_circular_permutation(FILE* infile,FILE* outfile){
//À modifier
}


void plus_clair(FILE* infile, FILE* outfile,int n){
//À modifier
}



void encryption_simple(FILE* infile, FILE* outfile,int key[]){
//À modifier
}



/**** Exercice Bonus *****/
int pseudorandom(){
    static int state=  7;
    state= ((137 * state) + 187) % 256 ;
    return state;
}


void encryption_improved(FILE* infile, FILE* outfile,int key[]){
//À modifier
}

void decryption_improved(FILE* infile, FILE* outfile,int key[]){
//À modifier
}



int main(){
    int key[12]={142,234,109,27,39,241,99,199,75,41,20,171};
    
    return EXIT_SUCCESS;
}
