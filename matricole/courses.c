#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "implement.h"

void generate_random_code(char *code, int length) {
  const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
  for (int i = 0; i < length - 1; i++) {
    code[i] = charset[rand() % (sizeof(charset) - 1)];
  }
  code[length - 1] = '\0';
}

                  // Funzione unica che riempie Laurea, Studente e Corso
void auto_fill(void *entity, char type) {
  srand(time(NULL));							// Imposta il seme per la generazione di numeri casuali

  if (type == 'L') {  						// Laurea
    Laurea *major = (Laurea *)entity;
    int random_index = rand() % 11;				// 11 lauree disponibili

    major->Nome_Laurea = lauree.nomi_lauree[random_index];
    generate_random_code(major->code_laurea, 4);			// Genera un codice random per la laurea
    major->tot_C = rand() % (10 - 3 + 1) + 3;				// Numero di corsi tra 3 e 10

    major->insegamenti = malloc(major->tot_C * sizeof(char *));
    for (int i = 0; i < major->tot_C; i++) {
      major->insegamenti[i] = corsi.nomi_corsi[rand() % 40]; 	// Selezione casuale dei corsi
    }

    printf("Laurea auto-riempita: %s, codice: %s, numero corsi: %d\n", major->Nome_Laurea, major->code_laurea, major->tot_C);

  }
  else if (type == 'S') {					// Studente
    Studente *student = (Studente *)entity;	
    int random_gender = rand() % 2;				// 0 per maschio, 1 per femmina
    int random_index = rand() % 18;				// Poiché ci sono 18 nomi per i ragazzi e 29 per le ragazze

    if (random_gender == 0) {
      student->nome = studenti.nomi_ragazzi[random_index];	// Nomi maschili
    }
    else {
      random_index = rand() % 29;  // Indice per le ragazze
      student->nome = studenti.nomi_ragazze[random_index];	// Nomi femminili
    }

    generate_random_code(student->matricola, 9);			// Genera una matricola casuale
    student->AVG_voti = (rand() % 401) / 10.0;			// Punteggio medio tra 0.0 e 40.0
    student->n_punteggi = rand() % 6 + 1;				// Numero casuale di punteggi (da 1 a 6)
    student->corsi = malloc(student->n_punteggi * sizeof(Corso *));

                  // Assegna casualmente i corsi a cui lo studente è iscritto
    for (int i = 0; i < student->n_punteggi; i++) {
      student->corsi[i] = malloc(sizeof(Corso));
      student->corsi[i]->nome_corso = corsi.nomi_corsi[rand() % 40];
    }

    printf("Studente auto-riempito: %s, matricola: %s, voto medio: %.2f\n", student->nome, student->matricola, student->AVG_voti);

  }
  else if (type == 'C') {						// Corso
    Corso *course = (Corso *)entity;
    int random_index = rand() % 40;				// Poiché ci sono 40 corsi disponibili
    course->nome_corso = corsi.nomi_corsi[random_index];
    generate_random_code(course->Code_Corso, 6);			// Genera un codice casuale per il corso
    course->CFU = rand() % 12 + 1;					// Numero di CFU tra 1 e 6
    course->S_R = rand() % 21 + 3; 					// Numero di studenti iscritti tra 3 e 23
    course->student_score = rand() % 31;				// Voto del corso (da 0 a 100)
    printf("Corso auto-riempito: %s, codice: %s, CFU: %d, studenti iscritti: %d\n", course->nome_corso, course->Code_Corso, course->CFU, course->S_R);
  }
  else {
    printf("Tipo non valido.\n");
  }
}


void Create_Major(){
  Laurea major;
  system ("clear");
  printf ("\nCreate_Major() currently running...\n");
  // create a major
  // if none are present is mandatory to make one
  // if user trying to make one that already exist show it's data and warn user
  // Nome_laurea, code_laurea & insegnamenti can't be NULL
  // insegnamenti must have at least two courses registred in it
  // code_laurea is generated randomly

  int exit = 3;
  int n_C = 3;
  char preference = 'a';
  char Codice[4];
  Laurea new_major;

              //alloco lo spazio in memoria per salvare i valori di major
  new_major.Nome_Laurea=malloc(sizeof(char) *20);

  printf ("\nyou prefer manual (m) or automatic (a) fill of the informations for the major?\n preference: ");
  scanf(" %c", &preference);
  if (preference != 'a' && preference != 'm'){
    system("clear");
    printf ("\ninvalid input, terminating...\n");
    system("clear");
    return;
  }
  else  if (preference == 'm'){

    system("clear");
    printf ("\nyou choose to fill manually everything.\nwhat will the name of your major be?\nname: ");
    scanf("%s", new_major.Nome_Laurea);
    printf("\nyou created a major called %s.", new_major.Nome_Laurea);
    do{
      exit--;
      printf ("\nhow many courses does this major have?\ncourses: ");
      scanf ("%i", &n_C);
      if (n_C < 3){
        printf("\nsorry but the major need at least 3 courses to be operative");
      }
      if (exit == 0) {
        printf("\nexcited maximum number of attempts, shutting down...");
        return;
      }
    } while (n_C < 3 && n_C > 10);
    new_major.tot_C = n_C;
    printf("\nyou created a major with %i courses.\n", new_major.tot_C);

    printf("\nwhat will the code of the major be? code: ");
    scanf("%s", new_major.code_laurea);
    printf ("\nyou ceated a major which's code is: %s", new_major.code_laurea);
    printf("\n\nMajor name: %s\nCourses number: %i\nMajor's code: %s", new_major.Nome_Laurea, new_major.tot_C, new_major.code_laurea);

  }
  else {
    system("clear");
    printf("\nyou choose to fill every camp automatically.\n");
    auto_fill(&major, 'L');

  }
  printf ("\nCreate_Major() terminating...\n");
}



void Create_Course(){
  Corso Course;
  system ("clear");
  printf ("\nCreate_Course() currently running...\n");
  // create couse
  // course_code, CFU, code_laurea[] & nome_corso can't be NULL
  // course_code is to be generated randomly
  // there must be at least 3 students registred to a course

  int exit = 3;
  int n_C = 3;
  char preference = 'a';
  char Codice[4];
  Laurea new_major;

              //alloco lo spazio in memoria per salvare i valori di major
  new_major.Nome_Laurea=malloc(sizeof(char) *20);

  printf ("\nyou prefer manual (m) or automatic (a) fill of the informations for the major?\n preference: ");
  scanf(" %c", &preference);
  if (preference != 'a' && preference != 'm'){
    system("clear");
    printf ("\ninvalid input, terminating...\n");
    system("clear");
    return;
  }
  else  if (preference == 'm'){

    system("clear");
    printf ("\nyou choose to fill manually everything.\nwhat will the name of your major be?\nname: ");
    scanf("%s", new_major.Nome_Laurea);
    printf("\nyou created a major called %s.", new_major.Nome_Laurea);
    do{
      exit--;
      printf ("\nhow many courses does this major have?\ncourses: ");
      scanf ("%i", &n_C);
      if (n_C < 3){
        printf("\nsorry but the major need at least 3 courses to be operative");
      }
      if (exit == 0) {
        printf("\nexcited maximum number of attempts, shutting down...");
        return;
      }
    } while (n_C < 3 && n_C > 10);
    new_major.tot_C = n_C;
    printf("\nyou created a major with %i courses.\n", new_major.tot_C);

    printf("\nwhat will the code of the major be? code: ");
    scanf("%s", new_major.code_laurea);
    printf ("\nyou ceated a major which's code is: %s", new_major.code_laurea);
    printf("\n\nMajor name: %s\nCourses number: %i\nMajor's code: %s", new_major.Nome_Laurea, new_major.tot_C, new_major.code_laurea);

  }
  else {
    system("clear");
    printf("\nyou choose to fill every camp automatically.\n");
    auto_fill(&new_major, 'L');

  }

  printf ("\nCreate_Course() terminating...\n");
}

void sm(){
  // saves the changes to the struct Laurea
}

void sc(){
  // saves the canges to the struct Course
}

void FIND_C(){
  system ("clear");
  printf ("\nFIND_C() currently running...\n");
  // finds a course
  // works similar to SEARCH_S()
  // search can be made either by nome_corso, course_code or seeing the list of all the courses of a certain major
  // if no match is found return an error msg to user
  // if course not found it can be used to add a new course by calling Create_Course()

  printf ("\nFIND_C() terminating...\n");
}

void save_majors(Laurea *majors, int count, const char *filename) {
  FILE *file = fopen(filename, "wb");
  if (!file) {
    perror("Error opening file for writing");	
    return;
  }

  // Scrivi il numero di lauree (header)
  fwrite(&count, sizeof(int), 1, file);

      // Scrivi i dati delle lauree
  for (int i = 0; i < count; i++) {
    // Scrivi campi fissi
    fwrite(majors[i].Nome_Laurea, sizeof(char), 20, file); // Nome massimo 20 caratteri
    fwrite(majors[i].code_laurea, sizeof(char), 4, file);  // Codice massimo 4 caratteri
    fwrite(&majors[i].tot_C, sizeof(int), 1, file);        // Totale corsi
    // Eventuali dati variabili (e.g., corsi associati)
  }

  fclose(file);
}

Laurea* load_mjrs(int *count, const char *filename) {    
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Error opening file for reading");
        return NULL;
    }

    // Leggi il numero di lauree (header)
    fread(count, sizeof(int), 1, file);

    // Alloca memoria per le lauree
    Laurea *majors = malloc((*count) * sizeof(Laurea));
    if (!majors) {
        perror("Error allocating memory");
        fclose(file);
        return NULL;
    }

    // Leggi i dati delle lauree
    for (int i = 0; i < *count; i++) {
        // Leggi campi fissi
        majors[i].Nome_Laurea = malloc(sizeof(char) * 20);
        fread(majors[i].Nome_Laurea, sizeof(char), 20, file);
        fread(majors[i].code_laurea, sizeof(char), 4, file);
        fread(&majors[i].tot_C, sizeof(int), 1, file);

        // Eventuali dati variabili (e.g., corsi associati)
    }

    fclose(file);
    return majors;
}


void REGISTER_NScore(){
  	system ("clear");
	printf ("\nREGISTER_NScore() currently running...\n");
	// register a new score of a course for n students
	// can be done both by searching for a Course or for a student
	// case 1 call FIND_C() -> then ask for the stuents matricola, call CHANGE_S_DATA() use the matricola as filter, 		and after finding the student 	go directly to the course's score and change it from NULL to the score 		the user will enter
	// case 2 call CHANGE_S_DATA() -> then ask either for the course name or the code, add it's score

  printf ("\nREGISTER_NScore() terminating...\n");
}