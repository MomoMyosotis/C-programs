/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum_matrix(int rows, int cols, int matrix[rows][cols]){

  int sum = 0;
  for(int i = 0; i < rows; i++){
  for(int j = 0; j < cols; j++){
    sum = sum + matrix[i][j];
    }
  }

  return sum;
}

int product_matrix(int rows, int cols, int matrix[rows][cols]){

  int prod = 1;
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      prod = prod * matrix[i][j];
    }

  }
  return prod;
}


int main(void){

  int m, n;
  int i = 0;
  srand(time(NULL));
  printf ("insert number of rows: ");
  scanf ("%i", &m);
  printf ("insert number of columns: ");
  scanf ("%i", &n);
  int matrix[m][n];

  printf("\nokay, now we gotta fill it up");

  printf ("\nselect type of generation: \n1 - random\n2 - keyboard\nchoice is: ");
  int choice = 0;
  scanf ("%i", &choice);

  if (choice != 1 && choice != 2){

    printf ("\ninvalid input, terminating program");
    return 0;
  }
  else if (choice == 1){
    printf ("\nrandom fill selected.\n");
    for (i = 0; i < m; i++){
      for (int j = 0; j < n; j++){
        matrix[i][j] = rand()%10;
      }
    }
  }
  else {
    printf("\nmanual fill selected.\n");
      printf("\ninsert values for matrix:\n");
      for (i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
          printf ("insert value for position [%i][%i]: ", i, j);
          scanf ("%i", &matrix[i][j]);
        }
      }

  }

  printf ("the array is:\n");
  for (i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
      printf (" %i  ", matrix[i][j]);
    }
    printf ("\n");
  }

  printf ("\nsum of matrix is: %i", sum_matrix(m, n, matrix));
  printf ("\nproduct of matrix is: %i", product_matrix(m, n, matrix));


  return 0;
}

*/