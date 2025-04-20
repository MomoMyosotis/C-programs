#include <stdio.h>

int main (void){
    int lemon, peach;
    int nooty[2] = {lemon, peach};
    do {
        printf ("insert month: ");
        scanf ("%i", &lemon);
    }
    while (lemon < 1 || lemon > 12);
    do {
        printf ("\ninsert day: ");
        scanf ("%i", &peach);
    }
    while (peach < 0 || peach > 32);

    if (lemon == 1){
        if (peach < 20){
            printf ("\ncongrats, you're a... capricorn! \nyou've enough shit to deal with by yourself");
            }
        else (printf ("\ncongrats, you're an... acquarium!"));
    };

        if (lemon == 2){
            if (peach < 20){
                printf ("\ncongrats, you're an... acquarium!");
            }
            else (printf ("\ncongrats, you're a... pisces! \nnot much of a doubt, with that face..."));
        };

        if (lemon == 3){
            if (peach < 22){
                printf ("\ncongrats, you're a... pisces! \nnot much of a doubt, with that face....");
            }
            else (printf ("\ncongrats, you're an... aries!\n same as capircorn up there"));
        };

        if (lemon == 4){
            if (peach < 21){
                printf ("\ncongrats, you're an... aries! \nsame as capricorn up there");
            }
            else (printf ("\ncongrats, you're a... taurus! \n"));
        };

        if (lemon == 5){
            if (peach < 21){
                printf ("\ncongrats, you're a... taurus!");
            }
            else (printf ("\ncongrats, you're a... gemini!"));
        };

        if (lemon == 6){
            if (peach < 21){
                printf ("\ncongrats, you're a... gemini!");
            }
            else (printf ("\ncongrats, you're a... ow- I...I'm sorry dude..."));
        };

        if (lemon == 7){
            if (peach < 23){
                printf ("\nncongrats, you're a... ow- I...I'm sorry dude...");
            }
            else (printf ("\ncongrats, you're a... lion!"));
        };

        if (lemon == 8){
            if (peach < 24){
                printf ("\ncongrats, you're a... lion!");
            }
            else (printf ("\ncongrats, you're a... virgo? nah, surely not you!"));
        };

        if (lemon == 9){
            if (peach < 23){
                printf ("\ncongrats, you're a... virgo? nah,surely not you!");
            }
            else (printf ("\ncongrats, you're a... libra! \neven though you look squi-libra-to"));
        };

        if (lemon == 10){
            if (peach < 23){
                printf ("\ncongrats, you're a... libra! \neven though you look squi-libra-to");
            }
            else (printf ("\ncongrats, you're a... scorpio!"));
        };

        if (lemon == 11){
            if (peach < 23){
                printf ("\ncongrats, you're a... scorpio!");
            }
            else (printf ("\ncongrats, you're a... sagittarius"));
        };

        if (lemon == 12){
            if (peach < 23){
                printf ("\ncongrats, you're a... sagittarius!");
            }
            else (printf ("\ncongrats, you're a... capricorn"));
        };
    printf ("\n \nI've done my job, gonna take a nap... \n");
    return 0;
}