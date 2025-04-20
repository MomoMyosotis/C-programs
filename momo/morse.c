#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Funzione per convertire un carattere da Morse a testo
char morseToChar(const char *morse) {
    char morseTable[37][5] = {
        {".-"},    // A
        {"-..."},  // B
        {"-.-."},  // C
        {"-.."},   // D
        {"."},     // E
        {"..-."},  // F
        {"--."},   // G
        {"...."},  // H
        {".."},    // I
        {".---"},  // J
        {"-.-"},   // K
        {".-.."},  // L
        {"--"},    // M
        {"-."},    // N
        {"---"},   // O
        {".--."},  // P
        {"--.-"},  // Q
        {".-."},   // R
        {"..."},   // S
        {"-"},     // T
        {"..-"},   // U
        {"...-"},  // V
        {".--"},   // W
        {"-..-"},  // X
        {"-.--"},  // Y
        {"--.."},  // Z
        {"-----"}, // 0
        {".----"}, // 1
        {"..---"}, // 2
        {"...--"}, // 3
        {"....-"}, // 4
        {"....."}, // 5
        {"-...."}, // 6
        {"--..."}, // 7
        {"---.."}, // 8
        {"----."}, // 9
        {" "}      // Space
    };

    for (int i = 0; i < 37; i++) {
        if (strcmp(morse, morseTable[i]) == 0) {
            if (i >= 0 && i <= 25) {
                return 'A' + i; // Carattere alfabetico
            } else if (i >= 26 && i <= 35) {
                return '0' + (i - 26); // Carattere numerico
            } else if (i == 36) {
                return ' '; // Spazio
            }
        }
    }

    return '\0'; // Carattere sconosciuto
}

// Funzione per convertire una stringa da Morse a testo normale
void morseToText(const char *morse) {
    char morseCopy[100]; // Copia della stringa di input
    strcpy(morseCopy, morse);
    
    char *token = strtok(morseCopy, " ");
    while (token != NULL) {
        char c = morseToChar(token);
        if (c != '\0') {
            printf("%c", c);
        }
        token = strtok(NULL, " ");
    }
}

// Funzione per convertire un carattere da testo a Morse
void charToMorse(char c) {
    char morseTable[37][5] = {
        {".-"},    // A
        {"-..."},  // B
        {"-.-."},  // C
        {"-.."},   // D
        {"."},     // E
        {"..-."},  // F
        {"--."},   // G
        {"...."},  // H
        {".."},    // I
        {".---"},  // J
        {"-.-"},   // K
        {".-.."},  // L
        {"--"},    // M
        {"-."},    // N
        {"---"},   // O
        {".--."},  // P
        {"--.-"},  // Q
        {".-."},   // R
        {"..."},   // S
        {"-"},     // T
        {"..-"},   // U
        {"...-"},  // V
        {".--"},   // W
        {"-..-"},  // X
        {"-.--"},  // Y
        {"--.."},  // Z
        {"-----"}, // 0
        {".----"}, // 1
        {"..---"}, // 2
        {"...--"}, // 3
        {"....-"}, // 4
        {"....."}, // 5
        {"-...."}, // 6
        {"--..."}, // 7
        {"---.."}, // 8
        {"----."}, // 9
        {" "}      // Space
    };

    if (isalpha(c)) {
        c = tolower(c); // Converti il carattere in minuscolo
    }

    if (c >= 'a' && c <= 'z') {
        printf("%s ", morseTable[c - 'a']);
    } else if (c >= '0' && c <= '9') {
        printf("%s ", morseTable[c - '0' + 26]);
    } else if (c == ' ') {
        printf(" ");
    } else if (c == '.') {
        printf(".-.-.- "); // Punto
    } else if (c == ',') {
        printf("--..-- "); // Virgola
    } else if (c == '?') {
        printf("..--.. "); // Punto interrogativo
    } else if (c == '\'') {
        printf(".----. "); // Apostrofo
    } else if (c == '!') {
        printf("-.-.-- "); // Punto esclamativo
    } else if (c == '/') {
        printf("-..-. "); // Barra
    } else if (c == '(' || c == ')') {
        printf("-.--.- "); // Parentesi
    } else if (c == '&') {
        printf(".-... "); // E commerciale
    } else if (c == ':') {
        printf("---... "); // Due punti
    } else if (c == ';') {
        printf("-.-.-. "); // Punto e virgola
    } else if (c == '=') {
        printf("-...- "); // Uguale
    } else if (c == '+') {
        printf(".-.-. "); // Più
    } else if (c == '-') {
        printf("-....- "); // Meno
    } else if (c == '_') {
        printf("..--.- "); // Sottolineato
    } else if (c == '"') {
        printf(".-..-. "); // Virgolette doppie
    } else if (c == '$') {
        printf("...-..- "); // Dollaro
    } else if (c == '@') {
        printf(".--.-. "); // Chiocciola
    } else {
        printf(" "); // Carattere sconosciuto, stampa uno spazio
    }
}

// Funzione per convertire una stringa da testo a Morse
void textToMorse(const char *text) {
    for (int i = 0; i < strlen(text); i++) {
        charToMorse(text[i]);
    }
}

int main() {
    int choice;
    char input[100];

    printf("Seleziona il tipo di conversione:\n");
    printf("1. Testo in codice Morse\n");
    printf("2. Codice Morse in testo\n");
    printf("Scelta: ");
    scanf("%d", &choice);
    getchar(); // Consuma il carattere newline residuo

    if (choice == 1) {
        printf("Inserisci il testo da convertire in codice Morse: ");
        fgets(input, sizeof(input), stdin);
        input[strlen(input) - 1] = '\0'; // Rimuovi il carattere newline dalla stringa di input
        textToMorse(input);
    } else if (choice == 2) {
        printf("Inserisci il codice Morse da convertire in testo: ");
        fgets(input, sizeof(input), stdin);
        input[strlen(input) - 1] = '\0'; // Rimuovi il carattere newline dalla stringa di input
        morseToText(input);
    } else {
        printf("Scelta non valida.\n");
    }

    printf("\n");

    return 0;
}
