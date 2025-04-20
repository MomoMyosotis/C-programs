#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){

    srand(time(NULL));
    int a, b;

    do {
        int dado_1[6] = {1, 2, 3, 4, 5, 6};
        int dado_2[6] = {1, 2, 3, 4, 5, 6};
        a = rand() % 7;
        b  = rand () % 7;
        printf ("%d \n", dado_1[a]);
        printf ("%d \n", dado_2[b]);
        printf ("\n");
    }
    while (a != b);


    return 0;
}