#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: pointer block of memory to fill
 * @b: value of set
 * @n: bytes of the memory
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;
	
	/* declaring for */
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /* add 1 position s */

	}

	return (s);
}
