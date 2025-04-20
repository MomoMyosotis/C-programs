#include <stdio.h>
#include <math.h>

int main (void){   
    float x_a, y_a, y_b, x_b, res;
    float limone, pesca;
    printf ("inserisci il valore di x_a: ");
    scanf ("%f", &x_a);
    printf ("\n ora inserisci il valore di y_a: ");
    scanf ("%f", &y_a);
    printf ("\n ora inserisci il valore di x_b: ");
    scanf ("%f", &x_b);
    printf ("\n ora inserisci il valore di y_b: ");
    scanf ("%f", &y_b);
    limone = (x_a -x_b);
    pesca = (y_a -y_b);
    res = sqrt((limone*limone) + (pesca*pesca));

    printf ("la distanza dall'origine è: %.2f \n", res);

return 0;
}