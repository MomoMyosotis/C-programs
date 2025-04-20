#include <stdio.h>

int main (void){
    int a;
    int b =1;
    int c;
    int somma = 0;
    printf ("quanti numeri devo sommare? ");
    scanf ("%i", &a);
    printf ("\n");
    do {
        printf ("inserisci il numero da sommare: ");
        scanf ("%i", &c);
        b++;
        somma = somma + c;
        printf ("\n %i \n", somma);
    }

    while (b <= a);

    return 0;
}