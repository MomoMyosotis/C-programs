#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){

srand(time(NULL));
double a = 1000000;
float pingu;
int lemon;
int peach;
int boopie = 0;
int squishy = 0;

for (int b = 0; b < a; b++){
    lemon = rand()%7;
    peach = rand() %7;
    boopie = lemon + peach;
    printf("the %i dice throw gave us: %i \n", b, boopie);
    if (boopie == 12)
    squishy = squishy +1;
}
printf ("\n %i \n", squishy);
pingu = squishy / a;
printf ("after many zigo zigo thinking and calculing and noot-nootying... \n");
printf ("i declare that the odds are... %.3f \n", pingu);
printf ("imma go and have snu snu");

printf ("\n");

return 0;
}