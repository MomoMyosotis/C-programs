#include <stdio.h>
#include <math.h>

int main (void){
    int a, boopie;
    float b, peach;
    int zighy = 1;
    
    do {
        printf ("insert a value: ");
        scanf ("%i", &a);
    }
    while (a < 1);

    printf ("\ninserted value: %i", a);
    
    printf ("\ninsert float b value: ");
    scanf ("%f", &b);

    printf ("\ninserted value: %.2f", b);

    for (boopie = 0; boopie < a; boopie++){
        for (int lemon = a; lemon < 0; lemon--){
            zighy = lemon * zighy;
        }
        peach = (pow(b, boopie) / zighy) * b/a;
    }
    printf ("\nthe ending value *i think* should be: %.3f", peach);
    printf ("\ngonna have a nap...\n");
    return 0;
}