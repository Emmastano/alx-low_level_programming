#include <stdio.h>

/**
 * main - entry point and print thr alphabet in lowercase.
 *
 * Return: the value of 0 always.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);

}
