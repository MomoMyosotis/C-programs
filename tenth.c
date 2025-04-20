#include <stdio.h>
#include <math.h>

int main (void) {
    int a;
    float b;
    printf ("inserisci il numero di cui vuoi la radice: ");
    scanf ("%i", &a);
    b = sqrt(a);
    printf ("\n la radice di %i è %.5f", a, b);
    printf ("\n");

    return 0;
}