#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  printf("Hello World! \n");
  srand (time (NULL));
  printf ("%i \n", rand()%100);
  return 0;
}
