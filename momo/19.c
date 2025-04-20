#include <stdio.h>
#include <math.h>

int main (void){

    int n;
    int d = 1;
    do {
        printf ("insert dim: ");
        scanf ("%i", &n);
    }
    while (n < 0);
    int boopie[n];

    for (int i = 0; i < n; i++) {
        boopie[i] = d;
        d = pow(2, i);
    }

    printf ("\n that's your boopin' array: \n");

    for (int a = 1; a < n; a++){
        int b = 1
        printf("%i ", boopie[b]);
        b++;
    }
    
printf ("\n");

return 0;
}