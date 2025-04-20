#include <stdio.h>

int main (void) {
    char ch1;
    printf ("insert value: ");
    scanf (" %c", &ch1);
    char ch2 = ch1 -1;
    char ch3 = ch1 +1;
    printf ("the previous value is %c \n", ch2);
    printf  ("while the insterted value is: %c \n", ch1);
    printf ("and the next value is %c", ch3);
    printf ("\n \n gonna have a nap \n \n Zz... Zz... \n \n");


    return 0;
}