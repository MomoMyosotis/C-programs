#include <stdio.h>

int main (void){

    int n;
    int b;
    printf ("insert the dimension of the array: ");
    scanf ("%d",&n);
    int tab[n];
    printf ("\n");
    for (int a = 0; a < n; a++){
        printf ("insert the %i value: ", a);
        scanf ("%i", &tab[a]);
    };

    printf ("\n that's the tab: ");

    for (int a = 0; a < n; a++){
        printf ("%d ",tab[a]);
    };

    printf ("\n");

    return 0;
}