#include <stdio.h>
int main (void){
    int x, y;
    printf ("inserisci il valore di x: ");
    scanf ("%i", &x);
    printf ("\n inserisci ora il valore di y: ");
    scanf ("%i", &y);
    printf ("\n molto bene, adesso vediamo se sono consecutivi... \n");

    printf("dopo lunghe riflesssioni filosofiche e matematiche e boopose ma soprattutto limonose, posso affermare che: \n");

    if (x = y+1, y = x +1){
        printf ("%i e %i sono consecutivi", x, y);
        }
    else {
        printf ("%i e %i non sono consecutivi", x, y);
        }
    printf ("\n");
    return 0;
}