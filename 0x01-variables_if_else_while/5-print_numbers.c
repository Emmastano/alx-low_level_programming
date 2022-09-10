#include <stdio.h>

/**
 * main - entry point and print all single digit numbers
 *        of base 10 starting from 0.
 *
 * Return: the value of 0 alwaays.
 */
int main(void)

{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d, num\n", num, num % 10);

	return (0);

}
