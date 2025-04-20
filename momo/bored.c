#include <stdio.h>

int main(void) {
    char a = 0;
    
    for (int boopie = 1; boopie <= 16; boopie++){
        int b = 0;
        printf ("\ninsert %i value to add: ", boopie);
        scanf ("%i", &b);
        printf ("%c", a);
        a = a + b;
    }

    printf ("\njob done. gonna have a nap, cya.\n");

    return 0;
}