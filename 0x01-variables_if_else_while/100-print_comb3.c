#include <stdio.h>

/**
 * main - entry point and print all possible different conbinations of two
 *        digits, separated by a comma and followed by a space, in ascending
 *        order.
 *
 * Return: the value is 0 always.
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 9 && digit2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}
