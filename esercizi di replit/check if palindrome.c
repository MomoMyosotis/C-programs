/*

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int is_palindrome(char *str){
  int i, j;
  int lenght = strlen(str);
  for (i = 0, j = lenght - 1; i < j; i++, j--){
    if (str[i] != str[j]){
      return 0;
    }
  }

  return 1;

}


int main(void){
  int n;
  printf ("\nenter the dim of the string: ");
  scanf ("%i", &n);
  getchar();

  char str[n +1];
  printf ("\nenter the string: ");
  scanf ("%s", str);

  getchar();
  printf("\nthe inserted string is: %s", str);

  if (is_palindrome(str) == 1){
      printf("\nthe given string is a palindrome");
  }
  else{
    printf ("\nthe given string isn't a palindrome");
  }

  return 0;
}

*/