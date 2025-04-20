#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main (void){

	int salary;

	int* ptr_salary;
	ptr_salary = &salary;

	printf("\nplease insert the salary: ");
	scanf ("%i", &salary);

	printf ("\n\nthe inserted value is: %i\n (you brookie)", salary);
	printf ("\nthe position of %i is %p", salary, &salary);
	printf ("\nthe pointer pointss at: %p\n", ptr_salary);

	*ptr_salary = salary *2;
	printf ("\nthe modified -using pointer- salary is: %i\n", salary);


	return 0;
}