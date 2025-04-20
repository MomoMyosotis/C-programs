#include <stdio.h>

// Funzione ricorsiva per calcolare il fattoriale di n
int fattoriale(int n) {
    // Caso base: il fattoriale di 0 è 1
    if (n == 0)
        return 1;
    // Caso generale: n * (n-1)!
    else
        return n * fattoriale(n - 1);
}

int main() {
    int numero;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    if (numero < 0)
        printf("Errore: inserito un numero negativo.\n");
    else
        printf("Il fattoriale di %d è %d.\n", numero, fattoriale(numero));

    return 0;
}
