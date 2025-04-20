#include <stdio.h>

int main (void) {
    int a;
    int b = 1;
    printf ("di che boopie di numero vuoi il fattoriale? \n");
    scanf ("%i", &a);
    if (a < b) {
        printf ("\n il fattoriale boopposo è 1 \n");
        printf ("LEMON \n");
    }
    else {
        for (int p = 1; p < a +1; p++) {
             b = b*p;
        }
             printf ("\n il fattoriale è: %i \n", b);
        printf ("PEACH \n");
    }
    return 0;
}