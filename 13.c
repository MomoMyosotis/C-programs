#include <stdio.h>

int main (void){

    int a = 28;
    int b = 30;
    int c = 31;
    int n;
    do {
        printf  ("inserisci il mese: ");
        scanf ("%i", &n);
    }
    while (n < 0, n > 13);
    if (n == 2){
        printf ("\n il mese %i ha %i giorni", n, a);
    }
    else {
        if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12 ){
            printf ("\n il mese %i ha %i giorni.", n, c);
        }
        else {
            printf ("\n il mese %i ha %i giorni.", n, b);
        }

    };
    printf ("\n");
    return 0;
}