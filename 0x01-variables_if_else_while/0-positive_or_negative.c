#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- entry point and print a random number and state whether it is a positive, negative, and zero
 *
 * Return: the value of 0 always
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					if (n > 0)
						printf("%d is positive\n", n);
					else if (n < 0)
						printf("%d is negative\n", n);
					else
						printf("%d is zero\n", n);
					return (0);
}
