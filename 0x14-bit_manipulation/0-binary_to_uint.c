#include "main.h"

/**
 * binary_to_uint - A function that converts binary number
 * to an unsigned integer
 * @b: A pointer to a binary string
 * Return: unsigned integer converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int black;
	unsigned int white = 0;

	if (!b)
		return (0);

	for (black = 0; b[black]; black++)
	{
		if (b[black] < '0' || b[black] > '1')
			return (0);
		white = 2 * white + (b[black] - '0');
	}

	return (white);
}
