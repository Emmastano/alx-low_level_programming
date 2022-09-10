#include <stdio.h>

/**
 * main - entry point and print all the numbers of base 16 in lowercase.
 *
 * Return: the value is 0 always.
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
		putchar("%d", num);

	putchar('\n');

	return (0);

}


