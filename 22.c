#include <stdio.h>

int main (void){

    //Si scriva un programma//
    //che chiede all'utente//
    //un numero positivo n e//
    //poi chiede n numeri interi//
    // Alla fine stampa massimo, //
    // minimo e media (con due //
    //cifre di precisione dopo la//
    // virgola) di tali numeri interi//

    int lemon;
    float media = 0;
    int d;
    printf ("how many boopie do you have? ");
    scanf ("%i", &lemon);
    if (lemon == 0){
        printf ("il minimo è 0 così come il massimo e la media. \n");
        return 0;
    }
    int boopie[lemon];
    printf ("\n");

    for (int peach = 0; peach < lemon; peach++){
        printf ("insert the %i peach value: ", peach);
        scanf ("%i", &boopie[peach]);
    }

    int min = boopie[0];
    int max = boopie[0];

    printf (" this is your boopin' array: \n");

    for (int peach = 0; peach < lemon; peach++){
        printf ("%i ", boopie[peach]);
    }

    printf ("\n wanna go on? ");
    scanf("%i", &d);
    if (d == 0){
        return 0;
    }
    else {
        printf ("\n molto bene, andiamo avanti allora. \n");
        //qui sotto calcolo la media //
        for (int a = 0; a < lemon; a++){
            media = media + boopie[a];
        }
        media  = media / lemon;
        printf ("\n la media è: %.2f ", media);
        //qui sotto calcolo il minino e il massimo//
        for (int b = 0; b < lemon; b++){
            if (boopie[b]< min)
            min= boopie[b];
            if (boopie[b] > max)
            max = boopie[b];
        }
        printf ("\n il minimo è: %i \n", min);
        printf("mentre il massimo è: %i \n", max);
    }
    printf ("welp, Imma go have a nap. cya \n");

return 0;
}