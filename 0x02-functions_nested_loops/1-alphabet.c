#include "main.h"

/**
 * main entry point- print_alphabet in lowercase
 *
 * Return: the value of 0 always
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');
}
