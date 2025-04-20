#include <stdio.h>

int main (void){

	int a, b, c;
	int d = 0;
	printf ("\ninsert desired operation:\n1. sum\n2. subtraction\n3. division\n4. moltiplication\nchoice: ");
	scanf ("%i", &a);
	printf ("\n");

	switch (a){
		case 1:
			printf ("you choose %i, therefore the operation will be a sum\n", a);

			printf ("\ninsert now the first element (0, 1, 2, 3, ...): ");
			scanf ("%i", &b);
			printf ("\n the first value is: %i\n", b);

			printf ("\ninsert now the second element (0, 1, 2, 3, ...): ");
			scanf ("%i", &c);
			printf ("\n the second value is: %i\n", c);
 
			d = b + c;
			printf ("\n %i + %i = %i\n", b, c, d);

		break;
		case 2:
			printf ("you choose %i, therefore the operation will be a subtraction\n", a);

			printf ("\ninsert now the first element (0, 1, 2, 3, ...): ");
			scanf ("%i", &b);
			printf ("\n the first value is: %i\n", b);

			printf ("\ninsert now the second element (0, 1, 2, 3, ...): ");
			scanf ("%i", &c);
			printf ("\n the second value is: %i\n", c);
 
			d = b - c;
			printf ("\n %i - %i = %i\n", b, c, d);
		break;
		case 3:
			printf ("you choose %i, therefore the operation will be a division\n", a);

			printf ("\ninsert now the first element (0, 1, 2, 3, ...): ");
			scanf ("%i", &b);
			printf ("\n the first value is: %i\n", b);

			printf ("\ninsert now the second element (0, 1, 2, 3, ...): ");
			scanf ("%i", &c);
			printf ("\n the second value is: %i\n", c);
 
			d = b / c;
			printf ("\n %i / %i = %i\n", b, c, d);
		break;
		case 4:
			printf ("you choose %i, therefore the operation will be a moltiplication\n", a);

			printf ("\ninsert now the first element (0, 1, 2, 3, ...): ");
			scanf ("%i", &b);
			printf ("\n the first value is: %i\n", b);

			printf ("\ninsert now the second element (0, 1, 2, 3, ...): ");
			scanf ("%i", &c);
			printf ("\n the second value is: %i\n", c);
 
			d = b * c;
			printf ("\n %i * %i = %i\n", b, c, d);
		break;
		default:
			printf ("invalid input, terminating...\n");
		break;
	}

	return 0;
}






