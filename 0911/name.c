#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main (void){

	char name[31]; // 30 spazi per il nome +1 terminatore
	printf ("insert your name: ");
	scanf("%30s", name); //legge solo i primi 30 char

	printf ("\nyour name is: %s\n", name);
	printf("\nthe lenght of your name is %lu\n", strlen(name) -1);

	sleep(3);	
	system("clear");

  return 0;
}