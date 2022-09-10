#include <stdio.h>

/**
 * main - entry point and print the lowercase alphabet in reverse.
 *
 * Return: the value 0 always.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);

}
