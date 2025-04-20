#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    srand(time(NULL));

    int lemon, nooty, peach;

    do
    {
        //la regola dice int = rand()%(max -min +1) //
        lemon = rand()%(10 - 2);
        nooty = rand()%(18 - -1);
        peach = rand()%(20 -6);
    
    printf ("the three boopin' numbers are: %i - %i - %i \n", lemon, nooty, peach);
    }
    while (lemon == nooty || lemon == peach);

    printf ("\n");

return 0;
}