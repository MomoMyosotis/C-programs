#include <stdio.h>

int main (void){
    int a;
    int b =1;
    float c;
    float somma = 0;
    float media;
    printf ("quanti numeri devo sommare? ");
    scanf ("%i", &a);
    printf ("\n");
    do {
        printf ("inserisci il numero da sommare: ");
        scanf ("%f", &c);
        b++;
        somma = somma + c;
    }
    while (b <= a);
    media = somma / a;
    printf ("la media è di: %.2f \n", media);


    return 0;
}