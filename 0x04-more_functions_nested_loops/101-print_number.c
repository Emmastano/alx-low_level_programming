#include "main.h"

/**
 * print_number - prints an number
 * @n: The number to print
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = num * -1;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}

}
