/*

#include <stdio.h>
#include <stdlib.h>

//Scrivere un programma che legga da tastiera un numero intero n e stampi tutti i numeri primi minori o uguali a n.

int is_prime(int n){
//checks for all the prime numbers between 1 and n

  int a;
  if (n <= 1) {
      return 0;
  }

  for (a = 2; a <= n/2; a++){
    if (n % a == 0){
      return 0;
    }
  }

  return 1;
}


int main(void){

  int n = 0;
  int counter = 1;
  int temp = 2;

  printf("this program returns all the prime numbers between 1 and a given maximum number.\n");

  do{
    temp = 2;
    printf("\nattempts left: %i\n", 6-counter);
    printf("\ninsert the max number: ");
    scanf("%i", &n);

    printf("\nthe max number is: %i\nconfirm? (1/0)\n", n);
    scanf("%i", &temp);
    if (temp != 1){
    counter++;
    }

    if (counter >= 6){

      printf("\nused all attempts, shutting down\n");
      return 0;
    }
    printf("\033[2J\033[H");
  }
  while (temp != 1 && counter < 6);

  printf ("\nthe chosen number is: %i\n", n);

  printf("\nnow we'll find all the prime numbers between 1 and %i\n", n);

 int numering = 1;
  printf ("\nthe prime numbers founded between 1 and %i are:", n);
for (int i = 1; i <= n; i++){
  if (is_prime(i) == 1){
    printf ("\n %i. %i", numering, i);
    numering++;
  }
}

  return 0;
}

*/