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
        d = d +1;            
    }

    printf ("\n that's your boopin' array: \n");

    for (int a = 0; a < n; a++){
        printf("0 ");
        printf("%i ", boopie[a]);
    }
    
printf ("\n");

return 0;
}