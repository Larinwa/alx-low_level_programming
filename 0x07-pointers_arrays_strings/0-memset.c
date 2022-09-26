#include "main.h"

/**
 * _memset - fill n bytes of memory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: return memory area
 */

char *_memset(char *s, char b, unsigned int n)
{

	int spacee = n; /* only accept positive sizes */

	if (space > 0)
	{
		int i;

		for (i = 0; i < space; i++)
			s[i] = b;
	}

	return (s);
}
