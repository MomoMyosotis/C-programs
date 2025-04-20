#ifndef IMPLEMENT_H // Verifica se IMPLEMENT_H non è definito
#define IMPLEMENT_H // Se non è definito, lo definisce

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define MAX_LAUREE 30
#define MAX_COURSES 41
#define MAX_F_STUD 40
#define MAX_M_STUD 20

#define std_value 0


// Definizione della struttura Studente
typedef struct Studente {
  int n_punteggi;
  float AVG_voti;
  struct Corso **corsi; // Array di puntatori a puntatori (uno studente è
                        // iscritto a più corsi)
  char matricola[9];    // 8 caratteri per la matricola
  char *nome;
  char code_laurea[4];
} Studente;

// Definizione della struttura Corso
typedef struct Corso {
  int CFU;
  int student_score;
  int S_R;            // Numero degli studenti iscritti al corso
  char Code_Corso[6]; // 5 caratteri per il codice dell'insegnamento
  Studente *
      *matricola; // Array di puntatori a tutti gli studenti iscritti al corso
  char *nome_corso;
  char code_laurea[4]; // Codice del corso di laurea a cui appartiene il corso
} Corso;

// Definizione della struttura Laurea
typedef struct Laurea {
  int tot_S;           // Numero totale studenti iscritti al corso di laurea
  int tot_C;           // Numero totale dei corsi. MIN 3
  Studente **Studenti; // Array di puntatori a puntatori alla struct Studente
  char **insegamenti;  // Elenco degli insegnamenti appartenenti al corso
  char *Nome_Laurea;
  char code_laurea[4]; // 3 caratteri per il codice del corso
  Corso *corsi;
} Laurea;

// Struttura per i possibili nomi di laurea
typedef struct {
  char *nomi_lauree[MAX_LAUREE]; // Array di 30 puntatori a stringhe
} Possibili_Nomi_Laurea;

// Struttura per i possibili nomi di corso
typedef struct {
  char *nomi_corsi[MAX_COURSES]; // Array di 41 puntatori a stringhe
} Possibili_Nomi_Corso;

// Struttura per i possibili nomi di studente
typedef struct {
  char *nomi_ragazzi[MAX_M_STUD]; // Array di 18 puntatori a stringhe (ragazzi)
  char *nomi_ragazze[MAX_F_STUD]; // Array di 30 puntatori a stringhe (ragazze)
} Possibili_Nomi_Studenti;

// Dichiarazione delle possibili lauree, corsi e studenti
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

                     // Direct assignment (string literals are read-only)
                     "Claudia", "Silvia", "Vanessa", "Rita", "Barbara"}};

void generate_random_code();
void auto_fill(void *entity, char type);
void Create_Major();
void save_majors();
Laurea *load_mjrs(int *count, const char *filename);
void Create_Course();
void REGISTER_NStudent();
void SEARCH_S();
void FIND_C();
void S_LIST();
void RM_S();
void CHANGE_S_DATA();
void REGISTER_NScore();
void AVG_S();
void Course_Score();
void ss();
void sc();
void sm();

#endif
