#include <stdio.h>

/**
 * main - entry point and print all posible combinations of a single-digit
 *        numbers.
 *
 * Return: the value of 0 always.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);

}
