#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_rev - function that prints a string, in reverse
* @s: string to reverse
* Return: 0
*/

void print_rev(char *s)
{

	int len = strlen(s);

	while (len--)
		_putchar(*(s + len));
	_putchar(10);
}
