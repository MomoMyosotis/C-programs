/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void print(int a[], int dim){
  printf("\nhere's your array, sir.\n");
  for (int boopie = 0; boopie < dim; boopie++){
    printf ("%i ", a[boopie]);
  }
  printf ("\n");
}

void fill_array(int a[], int dim){

  for (int boopie = 0; boopie < dim; boopie++){
    int* quack = &a[boopie];
    printf ("\ninsert the %i boopin' value: ", boopie);
    scanf ("%i", quack);

  }

}

void auto_fill(int a[], int dim){

  int boopie = 0;
  int quack = 0;
  for (boopie; boopie < dim; boopie++){
    quack = rand() % 101;
    int* ptr = &a[boopie];
    *ptr = quack;
    sleep(0.2);
  }



}

void sort(int a[], int dim){

  int temp;
  for (int boopie = 0; boopie < dim -1; boopie++){

    for (int zighy = 0; zighy < dim -boopie -1; zighy++){
      if (a[zighy] > a[zighy + 1]) {
        temp = a[zighy];
        a[zighy] = a[zighy +1];
        a[zighy +1] =  temp;
      }
    }
  }
}


int main (void){

  srand(time(NULL));
  int choice;
  int dim;
  printf ("\ninsert array's dim: ");
  scanf ("%i", &dim);
  int a[dim];
  printf ("\nthe dim is: %i\n", dim);
  sleep(2);
  system("clear");
  printf("\nmanual fill (= 0) or automatic fill (= 1) of the array?\nchoice: ");
  scanf ("%1i", &choice);

  if (choice == 0){
    fill_array(a, dim);
  }
  else if (choice == 1){
    auto_fill(a, dim);
  }
  else {
    printf ("\ninvalid input, terminating...");
  }

  print(a, dim);


  sort(a, dim);

  print(a, dim);






  sleep(3);
  system("clear");
  return 0;
}
*/