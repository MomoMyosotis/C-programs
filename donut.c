#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define ROWS 30
#define COLS 60
#define GENERATIONS 50 // Numero predefinito di generazioni da simulare

// Funzione per inizializzare la griglia casualmente
void initializeGrid(int grid[ROWS][COLS]) {
    srand(time(NULL));

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            grid[i][j] = rand() % 2;
        }
    }
}

// Funzione per stampare la griglia
void printGrid(int grid[ROWS][COLS]) {
    system("clear"); // Pulisce il terminale
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (grid[i][j] == 1) {
                putchar('#');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }
}

// Funzione per calcolare la prossima generazione della griglia
void nextGeneration(int grid[ROWS][COLS]) {
    int newGrid[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            int neighbors = 0;

            for (int x = -1; x <= 1; x++) {
                for (int y = -1; y <= 1; y++) {
                    if (x == 0 && y == 0) {
                        continue;
                    }

                    int newX = i + x;
                    int newY = j + y;

                    if (newX >= 0 && newX < ROWS && newY >= 0 && newY < COLS) {
                        neighbors += grid[newX][newY];
                    }
                }
            }

            if (grid[i][j] == 1) {
                if (neighbors < 2 || neighbors > 3) {
                    newGrid[i][j] = 0;
                } else {
                    newGrid[i][j] = 1;
                }
            } else {
                if (neighbors == 3) {
                    newGrid[i][j] = 1;
                } else {
                    newGrid[i][j] = 0;
                }
            }
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            grid[i][j] = newGrid[i][j];
        }
    }
}

int main() {
    int grid[ROWS][COLS];

    printf("Benvenuto nel Gioco della Vita di Conway!\n");
    printf("Simulazione automatica in corso...\n");

    // Inizializza la griglia casualmente
    initializeGrid(grid);

    // Ciclo principale
    for (int gen = 0; gen < GENERATIONS; gen++) {
        printf("Generazione %d/%d\n", gen + 1, GENERATIONS);

        // Stampa la griglia
        printGrid(grid);

        // Calcola la prossima generazione
        nextGeneration(grid);

        // Attendiamo per un breve periodo prima di calcolare la prossima generazione
        usleep(100000); // 100 ms
    }

    return 0;
}
