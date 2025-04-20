#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "penta.h"

typedef struct list {
	int x;
	struct list* tail;
} Str;


// alloca una struct list contenente x e tail e ne restituisce il puntatore in memoria
struct list* construct(int x, struct list* tail) {  

	Str* list = malloc(sizeof(Str));
	if (!list) {
		printf("memory allocation error for list.\n");
		return NULL;
	}
	list->x = x; // vistoche è un int non uso la strncpy che è per le stringhe
	list->tail = tail; // ogni nuovo nodo creato con malloc punta al nodo precedente grazie a tail

	return list;
}


// determina se la lista l contiene almeno un elemento x pentafratto
// (si chiami la funzione opportuna dell’Esercizio 1)
int at_least_one(struct list* l) {
	
	int how_many = 0;
	for (; l != NULL; l = l->tail) {
		if (is_pentafract(l->x) == 1) {
			how_many++;
			return (l->x);
		}
	}
	if (how_many == 0) {
		printf("\nno pentafract found.");
		return 0;
	}

}


/*
main.c deve contenere una funzione iniziale main che esegue le seguenti operazioni:
1. crea una lista 5 → 12 → 6 → 15;
2. chiama at least one passando tale lista come parametro;
3. stampa il valore ritornato dalla chiamata di funzione del punto precedente
*/

int main(void) {

	struct list* head = construct(0, NULL);
	int x_value;
	int nv;
	int counter = 0;
	int choice = 2;

	printf("\nmanual(1) or auto(0) fill?\nchoice: ");
	scanf("%i", &choice);
	if (choice == 1) {
		printf("\nhow many values have to be added to the list?\nlength: ");
		scanf("%i", &nv);
		if (nv < 0) {
			printf("\ninvalid input, retry. nv must be bigger than 0");
			do {
				if (counter == 5) {
					printf("\nexceeded max number of attempts, terminating.\n");
					return 0;
				}
				printf("\n");
				printf("\ninsert list length: ");
				scanf("%i", &nv);
				counter++;
			} while (nv < 0);
		}

		for (int temp = 0; temp < nv; temp++) {
			printf("\ninsert the %d number of the list: ", temp + 1);
			scanf("%i", &x_value);
			printf("\nthe value is: %d", x_value);
			head = construct(x_value, head);
		}

	}

	else if (choice == 0) {
		head = construct(15, head);
		head = construct(6, head);
		head = construct(12, head);
		head = construct(5, head);
	}

	else {
		printf("\ninvalid input, terminating...");
		return 0;
	}
	int result = at_least_one(head);
	printf("returned value is: %d.\n", result);

	printf("\n");
	return 0;
}