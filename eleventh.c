#include <stdio.h>

int main (void){

    int start = 0;
    int n;
    int end =100;
    do {
        printf ("inserisci numero da sommare: ");
        scanf ("%i", &n);
        start = start + n;
        if (start < end)
        printf ("fino ad adesso hai raggiunto %i, continua. \n", start);
    }
    while (end > start);
    printf ("congrats, hai raggiunto %i \n", start);
    printf ("bene così, abbiamo finito \n");


    return 0;
}