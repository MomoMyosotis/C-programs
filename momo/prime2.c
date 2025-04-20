#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main (void){

    srand (time(NULL));

    bool check;
    int prime;

    do{
        int a = rand()%(1000000 -2 +1)+2;
        int lim = sqrt(a);
        printf ("\n%i", a);
        check = true;

        for (int boopie = 2; boopie <= lim; boopie++){
            if (a % boopie == 0){
                check = false;
                break;
            }
        }
        if (check) {
        prime = a;
        }
    }
        while (!check);

    printf ("\nthe prime number is: %i", prime);


    printf ("\nImma take a nap... \n");
    return 0;
}