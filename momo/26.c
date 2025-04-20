#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int squishy(int nooty) {
    if (nooty <= 1) return 0; // 0 e 1 non sono primi
    if (nooty <= 3) return 1; // 2 e 3 sono primi

    // Verifica divisibilità per tutti i numeri da 2 a radice quadrata di num
    for (int i = 2; i * i <= nooty; i++) {
        if (nooty % i == 0) {
            return 0; // Il numero è divisibile, quindi non è primo
        }
    }
    return 1; // Se non è stato trovato alcun divisore, il numero è primo
}

int main(void) {
    srand(time(NULL));
    int boopie;
    int lemon = 0;
    int peach = 0;

    do {
        boopie = rand()%(2000000000 - 2);
        peach = peach +1;

        if (squishy(boopie)) {
            printf("%d is boopin' prime.\n", boopie);
        }
        else {
            printf("%d .\n", boopie);
            }
        }
    while (! squishy(boopie));
    printf ("\n");
    printf ("number of total attempt: %i \n", peach);

    return 0;
}