#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int boopie;
    int b = 0;
    do{
        printf ("\ninsert boopie dim: ");
        scanf ("%i", &boopie);
    }
    while (boopie < 1);

    int zighy[boopie];

    for (int a = 0; a < boopie; a++){
        int nooty = rand()%(1000 -2+1)+2;
        zighy[a] = nooty;
    }

    printf ("\nthat's your boopie, Lemon Lord. \n");
    
    for (int a = 0; a < boopie; a++){
        printf ("%d ", zighy[a]);
    }


    for (int a = 0; a < boopie; a++){
        if (zighy[a] % 2 == 0){
            int change = zighy[a];
            zighy[a] = zighy[b];
            zighy[b] = change;
        b++;
        }
    }

    printf ("\nthat's your fixed boopie, Lemon Lord. \n");
    
    for (int a = 0; a < boopie; a++){
        printf ("%d ", zighy[a]);
    }

    printf ("\n\nImma take a nap... \n");

    return 0;
}