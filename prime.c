#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>


bool isprime(int n){

    if (n < 2) {
        return false;
    }

    int lim = sqrt (n);

    for (int cycle = 2; cycle < lim +1; cycle++){
        if (n % cycle == 0){
            return false;
        }
    }
    return true;
}

//*************************************************************//

int main (void){

    srand(time(NULL));
    printf ("\nlooking for prime numbers...\n");

    int attempt_1 = 1;
    int lim = sqrt(1000000);
    int answer_1, answer_2;
    do {
        int lemon = rand ()%(1000000 -2+1) +2;
        printf("\nattempt %i is: %i\n", attempt_1, lemon);
        if (isprime(lemon)){
            if(attempt_1 == 1){
                answer_1 = lemon;
                attempt_1 ++;
            }
            else if (lemon != answer_1){
                answer_2 = lemon;
                break;
            }
        }
    }
    while (true);

    printf ("\n \nnuber of attempt: %i \nfirst number prime: %i\nsecond number prime is: %i\n", attempt_1 -1, answer_1, answer_2);
    printf ("\n gonna have a nap...\n");
    return 0;
}