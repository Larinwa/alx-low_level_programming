#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @n: an input integer of number of string to concatenate
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *my_input;
	unsigned int i = 0, value1 = 0, value2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[value1])
		value1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[value2])
		value2++;

	if (n >= value2)
		n = value2;

	my_input = malloc(value1 + n + 1);
	if (my_input == NULL)
		return (NULL);

	for (; i < (value1 + n); i++)
	{
		if (i < value1)
			my_input[i] = *s1, s1++;
		else
			my_input[i] = *s2, s2++;
	}
	my_input[i] = '\0';
	return (my_input);
}
