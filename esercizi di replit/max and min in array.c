/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int max_value(int arr[], int dim){
  int max = arr[0];
  for (int a = 0; a < dim; a++){
    if (arr[a] > max){
      max = arr[a];
    }
  }

  return max;
}

int min_value(int arr[], int dim){
  int min = arr[0];
  for (int a = 0; a < dim; a++){
    if (arr[a] < min){
      min = arr[a];
    }
  }

  return min;
}


int main (void){

  printf("\nthis program finds the max and the min in an array\n");

  srand(time(NULL));
  int dim, choice;
  int a = 0;

  printf ("\ninsert the dimension of the array: ");
  scanf("%i", &dim);
  int arr[dim];

  printf ("\nfor manual fill (1)\nfor random fill (2)\nelse it'll terminate.\n");
  printf("choice: ");
  scanf("%i", &choice);
  printf("\033[2J\033[0;0H");



  if (choice == 1){
    printf ("\noption 1 selected\nmanual filling\n");
    printf("\033[2J\033[0;0H");

    for (int b = 0; b < dim; b++){
      printf ("\ninsert the %i number: ", b+1);
      scanf ("%i", &a);
      arr[b] = a;
      a = 0;
      printf("\033[H\033[J");
    }
  }


  if (choice == 2){
    printf("\noption 2 selected\nrandom filling\n");
    for(int b = 0; b < dim; b++){
      int c = rand() % 1001;
      arr[b] = c;
      c = 0;
      printf("\033[2J\033[H");
    }
  }


  else {
    printf ("\ninvalid input, terminating...\n");
    return 0;
  }
  choice = 0;



  printf ("\nthe array is:\n");
  for (int b = 0; b < dim; b++){
    printf ("%i ", arr[b]);
  }

  printf ("\nthe program will now find the max and the min of the array\n");
  sleep(3);
  printf("\033[2J\033[H");

  printf ("\nthe array is:\n");
  for (int b = 0; b < dim; b++){
    printf ("%i ", arr[b]);
  }
  printf("\n\nthe max value is: %i\nthe min value is: %i\n", max_value(arr, dim), min_value(arr, dim));

  return 0;
}

*/