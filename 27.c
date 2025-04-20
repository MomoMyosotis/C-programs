#include <stdio.h>

int main (void){
    int dim;
    int lemon, peach, nooty;
    int control;
    int squishy = 0;

    do{
        printf ("insert dim: ");
        scanf ("%i", &dim);
    }
    while (dim <= 0);

    int boopie[dim];
    for (lemon = 0; lemon < dim; lemon++){
        printf ("insert %i number: ", lemon);
        scanf ("%i", &boopie[lemon]);
    }

    printf ("\nhere's your boopie: \n");
        for (peach = 0; peach < dim; peach++){
        printf ("%i ", boopie[peach]);
    };
    printf ("\n \nwanna continue? \n");
    scanf ("%i", &control);
    if (control == 0){
    printf ("operation terminated \n");
    return 0;
    };

    printf ("%i -> operation confirmed \n \n", control);
    
    for (nooty = 0; nooty < dim; nooty ++){
        if (boopie[nooty] % 2 == 0){
            int zighy = boopie[nooty];
            boopie[nooty] = boopie[squishy];
            boopie[squishy] = zighy;
            squishy++;
        }
    }
    printf ("\nokay, I've done it,here's your boopie: \n");

    for (int lily = 0; lily < dim; lily++){
        
        printf("%i ", boopie[lily]);
    }
    printf ("\n");

    return  0;
}