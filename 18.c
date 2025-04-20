#include <stdio.h>

int main(void) {
    int n;
    do {
        printf("Dammi la dimensione dell'array: ");
        scanf("%i", &n);
    } while(n < 0);

    int array[n];
    int d = 1;
    for (int i = 0; i < n; i++) {
        array[i] = d;
        // change number
        if (i%2 == 1) {
            d++;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%i ", array[i]);
    }
    printf("\n");

}