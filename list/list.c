#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

define MAX_DIM  51;


typedef struct numeri{

	int elemento;
	struct numeri *next

} squishy		// squishy è il soprannome della struct numeri -> invece di chiamare struct numeri chiamo squishy



void Add_Head(squishy **head, int valore) {

	squishy *new_node = (squishy*)malloc(sizeof(squishy));	 // Crea un nuovo nodo
	new_node->elemento = valore;

	new_node->next = *head;				// Collega il nuovo nodo alla lista esistente

	*head = new_node;					// Aggiorna la testa per puntare al nuovo nodo
}





int main (){

	int nn; //new number
	int dim;

	printf ("\nmain() is running...\n");
	printf





	return 0;
}