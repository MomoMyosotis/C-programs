#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    int a, b;

    srand(time(NULL));
    do {
        a = rand() % 7;
        b  = rand () % 7;
        printf ("the lemon value is: %d \n", a);
        printf ("the peach value is: %d \n", b);
        printf ("\n");
    }
    while (a != b);

    return 0;
}