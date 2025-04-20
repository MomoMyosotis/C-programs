#include <stdio.h>

int main (void){

    int n = 0;
        do {
        printf ("insert a month\nn = ");
        scanf ("%i", &n);
    }
    while (1 < n && n > 12);

    printf ("\nthe insert value is: %i", n);
    if (n == 2){
        printf ("\nthe %i month has either 28 or 29 days.", n);
    }
    else {if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 ||n == 10 || n == 12 ){
                printf ("\nthe %i month has 31 days.", n);
            }
            else {if (n == 4 || n == 6 || n == 9 || n == 11)
                printf ("\nthe %i month has 30 days.", n);
            }
        }

    printf ("\n");

    return 0;
}