#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: parameters
 * @b: parameters
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
