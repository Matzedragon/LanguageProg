#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*Question 1*/

void somme(int x, int y, int* pres) {
    printf("-----------\nDans somme\n-----------\n x: %d , adresse de x: %p\n", x, &x);
    *pres = x + y;

}


/*Question 2*/
void sommediff(int* px, int* py) {
    printf("-----------\nDans sommediff\n-----------\n x: %d , adresse de x: %p\n", *px, px);
    int tempo = *px + *py;
    int tempoDiff = *px - *py;

    *px = tempo;
    *py = tempoDiff;
}

/*Question 3*/

void get_circle_info(double diameter, double* pperimeter, double* parea) {
    *pperimeter = 2 * M_PI * (diameter / 2);
    *parea = M_PI*(diameter / 2) * (diameter / 2);
}


/*Question 4*/
int main() {

    int x, y, z;
    double d = 12.;
    double peri, surf;
    x = 10;
    y = 7;

    printf("-----------\nDans le main\n-----------\n x: %d , adresse de x: %p\n", x, &x);

    somme(x, y, &z);
    //utilisez somme pour mettre dans z le resultat de x+y ICI 

    printf("-----------\nDans le main (2)\n-----------\n x: %d , adresse de x: %p\n", x, &x);

    sommediff(&x, &y);
    // utilisez sommediff pour mettre dans x le resultat de x+y et dans y le résultat de x-y ICI

    printf("-----------\nDans le main (3)\n-----------\n x: %d , adresse de x: %p\n", x, &x);

    printf("-----------\nValeurs finales de x, y et z\n-----------\nx: %d, y: %d , z: %d\n", x, y, z);
    //résultat attendu: 17 -3 17
    get_circle_info(d, &peri, &surf);
    //utilisez ICI get_circle_info avec le diamètre d pour obtenir le pérmètre dans peri et la surface dans surf 

    printf("\nDiamètre : %lg , périmètre : %lg , surface : %lg\n", d, peri, surf);

    return 0;

}
