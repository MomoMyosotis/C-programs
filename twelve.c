#include <stdio.h>

int main (void){
    int boopie;
    printf ("inserisci quanti boopitie di limoni vuoi: ");
    scanf ("%i", &boopie);

  for (int n = 1; n <= boopie; n++) {
        for (int i = 1; i <= n - 1; i++){
             printf(" ");
        }
        printf("boopie\n");
    }

    return 0;
}