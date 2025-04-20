#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

#define DIM_X 45
#define DIM_Y 25
#define ALIVE 1
#define DEAD 0

// Funzione per inizializzare la griglia con una probabilità di cellule vive tra il 45% e il 70%
void inizializzaGriglia(int griglia[DIM_Y][DIM_X]) {
    srand(time(NULL));
    for (int i = 0; i < DIM_Y; i++) {
        for (int j = 0; j < DIM_X; j++) {
            // Imposta la probabilità tra il 45% e il 70% per generare cellule vive
            if (rand() % 100 < 70 && rand() % 100 >= 45) {
                griglia[i][j] = ALIVE;
            } else {
                griglia[i][j] = DEAD;
            }
        }
    }
}

// Funzione per stampare la griglia
void stampaGriglia(int griglia[DIM_Y][DIM_X]) {
    system("clear");
    for (int i = 0; i < DIM_Y; i++) {
        for (int j = 0; j < DIM_X; j++) {
            if (griglia[i][j] == ALIVE) {
                printf("# ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

// Funzione per calcolare il prossimo stato della griglia
void prossimoStato(int griglia[DIM_Y][DIM_X], int nuovaGriglia[DIM_Y][DIM_X]) {
    for (int i = 0; i < DIM_Y; i++) {
        for (int j = 0; j < DIM_X; j++) {
            int vicini = 0;

            for (int x = -1; x <= 1; x++) {
                for (int y = -1; y <= 1; y++) {
                    if (x != 0 || y != 0) {
                        int nuovaX = i + x;
                        int nuovaY = j + y;

                        if (nuovaX >= 0 && nuovaX < DIM_Y && nuovaY >= 0 && nuovaY < DIM_X &&
                            griglia[nuovaX][nuovaY] == ALIVE) {
                            vicini++;
                        }
                    }
                }
            }

            if (griglia[i][j] == ALIVE) {
                if (vicini == 2 || vicini == 3) {
                    nuovaGriglia[i][j] = ALIVE;
                } else {
                    nuovaGriglia[i][j] = DEAD;
                }
            } else {
                if (vicini == 3) {
                    nuovaGriglia[i][j] = ALIVE;
                } else {
                    nuovaGriglia[i][j] = DEAD;
                }
            }
        }
    }
}

int main() {
    int griglia[DIM_Y][DIM_X];
    int nuovaGriglia[DIM_Y][DIM_X];

    // Inizializza la griglia con probabilità tra il 45% e il 70% di cellule vive
    inizializzaGriglia(griglia);

    while (1) {
        stampaGriglia(griglia);
        prossimoStato(griglia, nuovaGriglia);
        usleep(100000);
        memcpy(griglia, nuovaGriglia, sizeof(griglia));
    }

    return 0;
}
