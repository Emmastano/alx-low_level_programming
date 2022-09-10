#include <stdio.h>

/**
 * main - entry point & print the alphabet in lowercase, except for q & e.
 *
 * Return: the value of 0 always.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);

}
