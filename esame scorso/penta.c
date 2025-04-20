#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "penta.h"

// stampa su un’unica riga il contenuto dell’array arr, lungo length, poi va a capo
void print(int arr[], int length) {
	printf("\n");
	for (int boop = 0; boop < length; boop++) {
		printf("%d ", arr[boop]);
	}
	printf("\n");
}
//			- COMPLETE -


// determina se il numero n non negativo e’ pentafratto,
// cioe’ se ha almeno 5 divisori interi positivi
int is_pentafract(int n) {
	int ntc = sqrt(n);		// per trovare i divisori basta arrrivare alla radice del numero?
	int counter = 0;
	for (int boopie = 1; boopie <= ntc; boopie++) { //nel caso ntc sia un quadrato perfetto
		if (n % boopie == 0) { // n diviso boopie da resto = 0
			counter++;
			if (boopie != n / boopie) {
				counter++;
			}
		}
		if (counter >= 5) {
			return 1;
		}
	}
	return 0;
}
//			- COMPLETE -

// modifica l’array, lungo length, in modo da spostare al suo inizio i suoi elementi
// pentafratti e alla sua fine i suoi elementi non pentafratti
void pentafract_first(int arr[], int length) {
	int index = 0;
	for (int nooty = 0; nooty < length; nooty++) {
		if (is_pentafract(arr[nooty]) == 1) {
			print(arr, length);
			printf("\n'%d' has to be moved.", arr[nooty]);
			int temp = arr[index];
			arr[index] = arr[nooty];
			arr[nooty] = temp;
			index++;
		}
	}
}


// inizializza arr, lungo length, con numeri interi casuali tra 0 a 999,
// usando srand() e rand()
void init_random(int arr[], int length) {
	srand(time(NULL));
	for (int squishy = 0; squishy < length; squishy++) {

		arr[squishy] = rand() % 1000;
	}
	// riempie arr
	print(arr, length);
	// stampa arr
	pentafract_first(arr, length);
	// riordina
	print(arr, length);
}
//			- COMPLETE -


int main(void) {
	int length;
	int counter = 5;

	printf("\nhow long do you want the array to be?\nlength: ");
	scanf("%i", &length);
	if (length < 0) {
		do {
			counter--;
			printf("\ninvalid input. length must be > 0 and you put '%d'.\n retry: ", length);
			scanf("%i", &length);
			if (counter == 0) {
				printf("\nexeeded max number of attempts, we'll use a predeterminated value.");
				length = 10;
				break;
			}
		} while (length < 0);
	}

	int arr[length];
	init_random(arr, length);

	printf("\n");
	return 0;
}
//			- COMPLETE -