#include <stdio.h>

int main (void){
    int h, check;
    int n = 1;
    do {
        printf ("insert high of pyramid: ");
        scanf ("%i", &h);
        printf ("\n");
    }
    while (h <= 0);
    printf ("\n the insert value is: %i\n\n 1 = yes\n 0 = no\nproceed? ", h);
    scanf ("%i", &check);
    if (check == 0) {
        printf ("\n *operation terminated by user*\n");
        return 0;
    }
    else {
        printf ("\n starting the pyramid... \n");
            for (int a = h; a > 0; a--){
                for (int m = a; m > 0; m--){
                    printf (" ");
                }
                for (int m = 0; m < h -a +1; m++){
                    printf ("%i ", n);
                    n++;
                }
                
                printf ("\n");
            }
        }
    printf ("\n");
    return 0;
}