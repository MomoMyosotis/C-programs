#include <stdio.h>

int main (void ){
    char letter;
    int n = 1;
    printf ("insert the letter: ");
    scanf ("%c", &letter);
    printf ("after long considerations I came to estalbish that the letter given (%c) ... \n", letter);
    printf ("* drammatic pause * \n");
    printf ("that it is the %i-th letter of the alphabet :P \n \n", letter - 'a' +1);
   
    
printf ("\n");

    return 0;
}