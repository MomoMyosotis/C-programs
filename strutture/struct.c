#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

#define MAX_DIM 20

const char *parole[] = {
    "apple", "banana", "cherry", "date", "elderberry", "nanna", "quack", "honeypie",
    "doggo", "pescosità", "limonosità", "puffy", "moffy", "papaya", "lisy", "pruty",
    "squishy", "boopie", "nooty", "zighy"
};

void rimuovi_invio(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';  // Rimuovi il carattere di invio
    }
}

void result (int counter, char parola_da_cercare[]){

	printf("\nresult() is currently running...");

	printf("\n\nthe found match is with the %i word.\n%s == %s\n", counter+1, parole[counter], parola_da_cercare);

	printf("\nresult() terminated...");

}

int look_4_word(int counter, char parola_da_cercare[]){

	printf("\n\nlook_4_word() is currently running...\n");
	if (counter == 21) {
		sleep(2);
		printf ("\n\n0 results found\n");
		return 1;
	}

	printf ("\ncomparison n°%i. \n %s\n--------------------\n-%s-", counter +1, parola_da_cercare, parole[counter]);
	int cntr = 0;	// counter
	while (parola_da_cercare[cntr] != '\0' && parole[counter][cntr] != '\0'){

		if (parola_da_cercare[cntr] != parole[counter][cntr]){
			fflush(stdout);
			return look_4_word(counter+1, parola_da_cercare);
		}
		cntr++;
	}
	if (parola_da_cercare[cntr] == '\0' && parole[counter][cntr] == '\0'){
		sleep(2);
		printf("\n\n_______________________\nfound a match!");
		result(counter, parola_da_cercare);
	}

	printf("\nlook_4_word() terminating...\n");
}


int valid_word(char parola_da_cercare[]){

	printf("\nvalid_word() is currently running...\n");

	if (strlen(parola_da_cercare) > 20){
		printf("\ninvalid world, max is 20. 1\nshutting down...");
		sleep(2);
		system("clear");
		return 1;
	}
	else {
		printf("%s is a valid word\n", parola_da_cercare);
		look_4_word(0, parola_da_cercare);
	}

	printf("\nvalid_word() terminated");
}

int main (){

	printf("\nmain() is currently running...");

	char parola_da_cercare[31];
	printf("\ninsert word to look for: ");
	fgets(parola_da_cercare, 30, stdin);
	rimuovi_invio(parola_da_cercare);
	valid_word(parola_da_cercare);

	printf("\nmain() terminated\n");
	sleep(2);
	return 0;
	fflush(stdout);
	system("clear");
}