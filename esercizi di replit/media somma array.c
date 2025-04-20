/*
  
  #include <stdio.h>

//legga da tastiera un numero intero positivo n e poi legga n numeri interi in un array. Il programma dovrebbe calcolare e stampare la somma e la media di questi numeri.

int sum(int arr[], int dim){
  int somma = 0;
  for(int i = 0; i < dim; i++){
    somma = somma + arr[i];
  }
  return somma;
}

float media(int arr[], int dim, int somma){
  float media = 0.00;

  media = (float)somma / dim;
  return media;
}


int main (void){

  int n, dim;
  printf ("\ninsert dim of array: ");
  scanf ("%i", &dim);

  int arr[dim];
  printf("\nlet's fill it up\n");

  for (int a = 0; a < dim; a++){
    printf ("insert the %i° number: ", a+1);
    scanf("%i", &n);
    arr[a] = n;
    n = 0;
    printf("\033[2J\033[H");
  }

  printf ("\nthe given array is: ");
  for (int a = 0; a < dim; a++){
    printf ("%i ", arr[a]);
  }
  printf ("\n");


  int somma = sum(arr, dim);

  printf("\nthe sum of the el6ements is: %i", sum(arr, dim));
  printf ("\nthe avarege of the elements is: %.2f", media(arr, dim, somma));

  return 0;
}

*/