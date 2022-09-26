#include "main.h"

/**
* _memset - function used to fill memory with a constant byte
* @s: memory space to be filled
* @b: byte to fill with
* @n: number of spaces to be filled
*
* Return: pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
	*(s + i) = b;
	}

return (s);
}
