#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory to an array using malloc
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *memo;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memo = malloc(nmemb * size);
	if (memo == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(memo + i) = 0;

	return (memo);
}
