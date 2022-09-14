#include "main.h"

/**
 * print_alphabet - function to print abc
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
