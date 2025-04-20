#include <stdio.h>

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
        printf ("insert %i position's value: ", a);
        scanf ("%i", &zighy[a]);
    }

    printf ("\nthat's your boopie, Lemon Lord. \n");
    
    for (int a = 0; a < boopie; a++){
        printf ("%d ", zighy[a]);
    }

    printf ("\n\nlet me se... \nDear God what a mess!\nPlease, Lemon Lord, allow me...\n");

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