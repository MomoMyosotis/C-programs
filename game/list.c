#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>

#define MAX_PLAYERS 10

typedef struct {
	char name[10];
	int score;
} Player;

Player list_of_players[MAX_PLAYERS];
int tot_players = 0;

void is_admin(char arr[], int dim) {
	printf("\nis_admin() started running\n");
	printf("\nHi Admin, here's your array:\n");
	for (int boopie = 0; boopie < dim; boopie++) {
		printf("%c ", arr[boopie]);
	}
	printf("\nis_admin() terminated its function\n");
	sleep(5);
	system("clear");
}

void fill_arr(int dim, char arr[]) {
	printf("\nfill_arr() started running\n");
	const char charset[] =
	"abcdefghijklmnopqrstuvwxyz"			// lettere minuscole
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"		// lettere maiuscole
	"0123456789"				// numeri
	"!@#$%^&*()-_=+[]{};:,.<>?";			 // caratteri speciali

	int charset_dim = sizeof(charset) - 1;
    
	for (int counting = 0; counting < dim; counting++) {
		int boopie = rand() % charset_dim;
		arr[counting] = charset[boopie];
	}
	is_admin(arr, dim);
	printf("\nfill_arr() terminated its function\n");
}

int confirm_arr(int dim) {
	int counter = 5;
	printf("\nconfirm_arr() started running\n");

	while (counter > 0) {
		if (dim > 20) {
			printf("Invalid dim. \n(%i is bigger than 20)\nRetry.\n", dim);
		}
		else {
			printf("The dim %i is valid\n", dim);
			break;
		}
		counter--;
		printf("\nInsert new dim: ");
		if (scanf("%i", &dim) != 1) {
			printf("Invalid input, please enter a number.\n");
			while (getchar() != '\n');
			continue;
			}
		}

	if (counter == 0) {
		printf("\nExceeded max attempt number\n");
		return 0;
	}

	sleep(5);
	system("clear");
	printf("\nconfirm_arr() terminated its function\n");
	return 1;
}

void status() {
	printf("\nstatus() started running\n");
	for (int temp = 0; temp < tot_players; temp++) {
		printf("\nPlayer name: %s\nPlayer score: %i\n##################", list_of_players[temp].name, list_of_players[temp].score);
	}
	printf("\nstatus() terminated\n");
}

void allocate() {
	printf("\nregister() started running\n");
	printf("\nhow many players (1-%i)? ", MAX_PLAYERS);
	int input_players;

	while (true) {
		if (scanf("%i", &input_players) != 1 || input_players < 1 || input_players > MAX_PLAYERS) {
			printf("Invalid input, please enter a number between 1 and %i.\n", MAX_PLAYERS);
			while (getchar() != '\n');
			continue;
		}
		tot_players = input_players;
		break;
	}

	getchar(); // Pulisci il newline residuo

	for (int temp = 0; temp < tot_players; temp++) {
		printf("\nInsert the %i name (max 10 char).\nName: ", temp + 1);
		char name[10];
		scanf("%10s", name);
		strcpy(list_of_players[temp].name, name);
		list_of_players[temp].score = 0;
	}
	status();
	printf("\nregister() terminated\n");
}

void game(int current_player, int dim, char arr[]){

	if (current_player >= tot_players){
			return;
	}

	char user_input[dim];
	int score = 0;

	printf ("\nit's %s's turn.\ninsert the %i string:  ", list_of_players[current_player].name, dim);
	scanf("%s", user_input);

	for (int i = 0; i < dim; i++) {
		if (user_input[i] == arr[i]) {
			score += 2; // Punteggio per carattere corretto in posizione corretta
		}
		else if (strchr(arr, user_input[i])) {
			score += 1; // Punteggio per carattere esistente ma in posizione sbagliata
		}
	}

	list_of_players[current_player].score += score;

	game(current_player +1, dim, arr);
}

int main(void) {
	srand(time(NULL));

	allocate();

	int dim;
	printf("\nInsert arr[]'s dim: ");
	if (scanf("%i", &dim) != 1 || dim <= 0) {
		printf("invalid input, please enter a positive number.\n");
		return 1;
	}
	printf("\n");
	char arr[dim +1];

	if (!confirm_arr(dim)){
		return 1;
	}
	fill_arr(dim, arr);

	game(0, dim, arr);

	printf("\nthe game is over, here's the score:\n");
	status();
	sleep(5);
	system("clear");
	return 0;
}
