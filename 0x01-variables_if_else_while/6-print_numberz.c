#include <stdio.h>

/**
 * main - entry point and print all single digit numbers of base 10 starting
 *        from 0.
 *
 * Return: the value of 0 always.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);

}
