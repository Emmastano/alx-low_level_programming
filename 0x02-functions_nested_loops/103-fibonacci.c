#include <stdio.h>

/**
 * main - write a program that finds and prints the sum of the even-valued
 * terms, followed by a new line
 * Return: something
 */
int main(void)
{
	int i;
	unsigned long int j, k, l, m;

	j = 1;
	k = 2;
	m = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			m = m + j;
		}
		l = j + k;
		j = k;
		k = l;
	}

	printf("%lu\n", m);

	return (0);
}
