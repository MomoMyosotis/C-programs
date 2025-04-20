#include <stdio.h>
int main(void){

//Si scriva un programma che chiede all'utente di inserire un singolo carattere da tastiera.
//Quindi stampa a video tale carattere, quello che lo precede nella tabella ASCII e quello che lo
// segue nella tabella ASCII.
    char b;

    printf("Inserisci un carattere: ");
    scanf("%c", &b);

    printf("I caratteri sono %c %c %c", b-1, b,b+1);

    printf ("\n");
    return 0;
}