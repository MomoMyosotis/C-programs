#include <stdio.h>

int main (void){

    int n;
    do {
        printf ("insert dim: ");
        scanf ("%i", &n);
    }
    while (n < 0);

    printf ("\n");
    int boopie[n];
    
    for (int a = 0; a < n; a++) {
        int lemon;
        printf ("insert the %i number: ", a);
        scanf ("%d", &lemon);
        boopie[a] = lemon;
    }

    printf ("\n very well, here's your boopin' array:\n");

    for (int peach = 0; peach < n; peach++){

        printf ("%i ", boopie[peach]);
    }

    printf ("\n here's your squishin' local max values: \n");

    for (int i = 0; i < n; i++){
        if (boopie[i] > boopie[i +1] && boopie[i] > boopie[i -1])
        printf ("%i ", boopie[i]);
    }
    
    printf ("\n now I'm done, Imma get a nap. \n");

    return 0;
}