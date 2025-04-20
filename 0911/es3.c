#include <stdio.h>

int add(int n){
	int sum = 0;
	if (n == 0) {
		return sum;
	}
	else if (n == 1){
		sum = n;
		return sum;
	}
	else{
		return n + add(n -1);
	}
}

int main (void){

	int n;
	printf ("this script calculetes the sum of the first natural n numbers.\n\ninsert n: ");
	scanf ("%i", &n);
	printf ("the sum of the first %i natural numbers is -> %i\n\n", n, add(n));


	return 0;
}