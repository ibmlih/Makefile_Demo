#include <stdio.h>
#include <stdlib.h>
#include "factorial.h"

int main()
{
	int n;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	printf("Factorial of %d is %d\n", n, factorial(n));
	return 0;
}

