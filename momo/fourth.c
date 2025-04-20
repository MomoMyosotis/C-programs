#include <stdio.h>

int main(void) {
    char a = 'a';
    int n;
    do {
     printf ("insert a number: ");
     scanf ("%i", &n);
    }
    while (n <= 0);
    printf ("\n the number is: %i \n", n);
    for (int m = 1; m <= n; m++){
        printf ("%c", a);
        a++;
    }
    if (a = a -1);
    for (int o = n; o > 0; o--){
        printf ("%c", a);
        a--;

    }
    printf ("\n");


  return 0;
}
