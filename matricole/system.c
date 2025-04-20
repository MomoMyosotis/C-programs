#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "implement.h"

Possibili_Nomi_Laurea lauree = {
    .nomi_lauree = {"Biologia", "Chimica", "Ingegneria Informatica",
                    "Matematica", "Fisica", "Economia", "Letteratura",
                    "Bioinformatica", "Psicologia", "Boopologia",
                    "Pisolinologia", "Scienze delle Merendine"}};

Possibili_Nomi_Corso corsi = {.nomi_corsi = {"Algoritmi",
                                             "Fisica 1",
                                             "Chimica Organica",
                                             "Inglese",
                                             "Programmazione",
                                             "Diritto Privato",
                                             "Storia Contemporanea",
                                             "Economia Aziendale",
                                             "Analisi Matematica",
                                             "Geometria",
                                             "Statistica",
                                             "Calcolo Numerico",
                                             "Marketing",
                                             "Biochimica",
                                             "Fisica 2",
                                             "Informatica",
                                             "Elettrotecnica",
                                             "Sociologia",
                                             "Fisica Matematica",
                                             "Teoria dei Giochi",
                                             "Storia della Filosofia",
                                             "Chimica Inorganica",
                                             "Laboratorio di Chimica",
                                             "Geografia",
                                             "Psicologia",
                                             "Programmazione Avanzata",
                                             "Filosofia del Linguaggio",
                                             "Microbiologia",
                                             "Ingegneria Meccanica",
                                             "Elettronica",
                                             "Psicologia Sociale",
                                             "Econometria",
                                             "Gestione delle Risorse Umane",
                                             "Finanza",
                                             "Marketing Strategico",
                                             "Contabilità",
                                             "Biologia Molecolare",
                                             "Robotica",
                                             "Filosofia Politica",
                                             "Psicologia Clinica",
                                             "Biotecnologie"}};

Possibili_Nomi_Studenti studenti = {
    .nomi_ragazzi = {"Momo", "Luca", "Papaya", "Matteo", "Francesco",
                     "Alessandro", "Andrea", "Stefano", "Davide", "Antonio",
                     "Giorgio", "Paolo", "Riccardo", "Salvatore", "Tommaso",
                     "Giuseppe", "Daniele", "Vincenzo"},
    .nomi_ragazze = {"Maria", "Anna", "Giulia", "Francesca", "Sara", "Elena",
                     "Martina", "Alycia", "Laura", "Lisa", "Federica", "Simona",
                     "Beatrice", "Valentina", "Lucia", "Claudia", "Silvia",
                     "Vanessa", "Rita", "Barbara", "Caterina", "Monica",
                     "Ilaria", "Paola", "Giovanna", "Roberta", "Valeria",
                     "Marta", "Carla", "Angela",

                     "Claudia", "Silvia", "Vanessa", "Rita", "Barbara"}};

//_____________________________________
int main (){

	int choice;
	int counter = std_value;
	printf ("\nwelcome, what are you here for?");
	sleep(1);
	system("clear");

	do {
		printf("\n\nhere's the menù:\n1. enter a new student.\n2. view the list of students.\n3. search for a student.\n4. remove a student.\n5. change a student's data.\n6. add a new score.\n7. see who got the higher AVG.\n8. view the results of a certain course.\n9. create a course.\n10. create a major.\n11. exit.");
		printf ("\n\noption: ");
		scanf ("%i", &choice);
		sleep(2);
		system("clear");
		counter++;

		switch (choice){
			case 1:
				printf("\nyou choose to enter a new student.\n");
				REGISTER_NStudent();
			break;
			case 2:
				printf("\nyou choose to view the list of students.\n");
				S_LIST();
			break;
			case 3:
				printf("\nyou choose to search for a student.\n");
				SEARCH_S();
				// search can be done by name or matrix number
			break;
			case 4:
				printf("\nyou choose to remove a student.\n");
				RM_S();
			break;
			case 5:
				printf("\nyou choose to change a student's data.\n");
				CHANGE_S_DATA();
			break;
			case 6:
				printf("\nyou choose to add a new score.\n");
				REGISTER_NScore();
				// either to all students or to a certain list of matrix numbers
			break;
			case 7:
				printf("\nyou choose to see the student with the highest AVG score.\n");
				AVG_S();
			break;
			case 8:
				printf("\nyou choose to view the results of a certain course.\n");
				Course_Score();
			break;
			case 9:
				printf("\nyou choose to create a course.\n");
				Create_Course();
			break;
			case 10:
				printf("\nyou choose to create a Major.\n");
				Create_Major();
			break;
			case 11:
				printf("\nyou choose to terminate the program.\n");
			return 0;
				sleep(3);
				system("clear");
			break;
			default:
				printf ("\nSorry, but %i is an invalid input.\n", choice);
				sleep(1);
				printf("%i attempts left.\n", 5-counter);
				if (counter > 4){
					printf ("\nYou just used your last attempt, terminating program.\n");
					sleep(1);
					system("clear");
					return 0;
				}
			break;
		}
	} while (choice != 11);

	return 0;
}

