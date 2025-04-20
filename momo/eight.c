#include <stdio.h>

int main (void){
    int n;
    int min;
    int somma = 0;
    int incremento = 0;
    int b;
    printf ("quanti numeri intendi sommare? ");
    scanf ("%i", &n);
    printf ("\n inseisci ora il valore di soglia: ");
    scanf ("%i", &min);

    do {
        printf ("inserisci il valore. \n NOTA: deve esserre maggiore di zero : ");
        scanf ("%i", &b);
        if (b < 1){
            printf ("mi dispiace, ora termino il programma. \n");
            return 0;
            }
        else {
            if (min <= b){
                somma = somma + b;
                }
        incremento++;
            }
        }
    while (incremento < n);
    printf ("\n");
    printf ("la somma è %i \n", somma);
    return 0;
}