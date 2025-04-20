#include <stdio.h>

int main(void){

  int counter = 0;
  int a = 0;
  int b;
  char c, temp;

  printf("insert array's dim: ");
  scanf("%i", &b);
  getchar();
  char arr[b +1];

  for(a = 0; a < b; a++){
    printf("\ninsert %i° number: ", a+1);
    scanf("%c", &temp);
    arr[a] = temp;
    getchar();
  }

  printf("\n\n");

  a = 0;
  printf ("the given array is: '");
  for (a; a < b; a++){
    printf("%c", arr[a]);
  }

  printf("'\n\n");

  printf ("what occurance you want to search?");
  printf("\noccurance: ");
  scanf ("%c", &c);

  for (a = 0; a < b; a++){
    if (arr[a] == c){
      counter++;
    }
  }
  printf("number of '%c' is: '%i'\n", c, counter);

  return 0;
}