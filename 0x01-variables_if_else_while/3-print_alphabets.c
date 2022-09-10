#include <stdio.h>

/**
 * main - entry point and print the alphabet in lowercase, and then in uppercase.
 *
 * Return: the value of 0 always.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);

}
