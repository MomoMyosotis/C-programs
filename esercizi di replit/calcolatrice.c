/*
#include <stdio.h>
#include <stdbool.h>

//_______________________
int sum(int a, int b) {
  int s = 0;
  s = a + b;
  return s;
}

//______________________
int difference(int a, int b){
  int diff = 0;
  diff = a - b;
  return diff;
}

//_____________________
int product(int a, int b){
  int product = 0;
  product = a * b;
  return product;
}

//______________________
float division(int a, int b){
  float first = a;
  float second = b;
  float div = 0;
  div = first / second;
  return div;
}

int factorial_a(int a){
  int fact = 0;
  if (a == 0 || a == 1){
    fact = 1;
    return fact;
  }
  else {
    return a * factorial_a(a -1);
  }
}


int factorial_b(int b){
  int fact = 0;
  if (b == 0 || b == 1){
    fact = 1;
    return fact;
  }
  else {
    return b * factorial_b(b -1);
  }
}

int a_pow_b(int a, int b){
  int pow = 1;
  if (a == 0){
    pow = 0;
    return pow;
  }
  else if (b == 1){
    pow = a;
    return a;
  }
  else {
    for (b; b > 0; b--){
      pow = pow * a;
    }
    return pow;
  }
}

int b_pow_a(int a, int b){
  int pow = 1;
  if (b == 0){
    pow = 0;
    return pow;
  }
  else if (a == 1){
    pow = b;
    return pow;
  }
  else {
    for (a; a > 0; a--){
      pow = pow * b;
    }
    return pow;
  }
}

int sum_a_b(int min, int max){
  int sum = 0;
  int quack;
  for (min; min < max; min++){
    quack = min;
    sum = sum + quack;
  }
  return sum;
}


            ___________________________________________
            ____________________________________________
            ____________________________________________
                UP -> FUNCTIONS
            _________________________________________
            __________________________________________
            _________________________________________

int main (void){
  int a, b, c, min, max;
  int counter = 0;
  bool exit = false;
  char end;
  char temp;

  do{
    printf ("\nNOTE: the numbers must be natural (0, 1, 2, ...)\n\n");
    do{
      if (counter == 5){
        printf("maximum attempts number has been exeeded.\nterminating...");
      }
      printf ("enter the first number: ");
      scanf ("%i", &a);
      if (a < 0){
        printf ("\ninvalid value of a, retry.\n");
        counter++;
      }
    }
    while (a < 0);
    do{
      if (counter == 5){
        printf("maximum attempts number has been exeeded.\nterminating...");
      }
      printf ("\nenter the second number: ");
      scanf ("%i", &b);
      if (b < 0){
        printf ("\ninvalid value of a, retry.\n");
        counter++;
      }
    }
    while (b < 0);

    if (a > b) {
      max = a;
      min = b;
    }
    else {
      max = b;
      min = a;
    }

//___________________________________________________________________________________________________

    printf ("\nwhat would you want to do?\nLIST: \n1. sum\n2. difference\n3. product\n4. division\n5. factorial of both\n6. a to the power of b\n7. b to the power of a\n8. sum of all the natural numbers from min to max\n");
    printf ("\nchoice is: ");
    scanf ("%i", &c);

    if (c == 1){
      printf ("\n%i + %i = %i\n", a, b, sum(a, b));
    }
    else if (c == 2){
      printf ("\n%i - %i = %i\n", a, b, difference(a, b));
    }
    else if (c == 3){
      printf ("\n%i * %i = %i\n", a, b, product(a, b));
    }
    else if (c == 4){
      printf ("\n%i / %i = %.2f\n", a, b, division(a, b));
    }
    else if (c == 5){
      printf ("\nfactorial of %i is %i \n", a, factorial_a(a));
      printf ("\nfactorial of %i is %i \n", b, factorial_b(b));
    }
    else if (c == 6){
      printf ("\n%i to the power of %i is -> %i\n", a, b, a_pow_b(a, b));
    }
    else if (c == 7){
      printf ("\n%i to the power of %i is -> %i\n", b, a, b_pow_a(a, b));
    }
    else if (c == 8){
      printf("l\nthe sum of the natural numbers from %i to %i is -> %i\n", min, max, sum_a_b(min, max));
    }
    else {
      printf ("\ninvalid input, terminating...");
      return 0;
    }


//___________________________________________________________________________
    printf ("\nwant to exit? (Y/N): ");
    scanf (" %c", &end);
    printf("\033[H\033[J");
    if (end == 'Y' || end == 'y'){
      exit = true;
    }
    else if (end == 'N' || end == 'n'){
      exit = false;
    }
    else {
      printf ("\ninvalid input, terminating... <3");
      exit = false;
      return 0;
    }
  }
  while (exit == false);

  return 0;
}

*/