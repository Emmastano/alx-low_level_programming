#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * To print a random number and state whether it is a positive, negative, or zero.
 *
 * Reture: Always 0
 */
int main(void)
{
	int n;
	srand(time (0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		Printf("%d is positive\n", n);
	else if (n>0)
		Printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

