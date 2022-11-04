#include "main.h"

/**
 * binary_to_uint - A function that converts binary number
 * to an unsigned integer
 * @b: A pointer to a binary string
 * Return: unsigned integer converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int baby;
	unsigned int boo = 0;

	if (!b)
		return (0);

	for (baby = 0; b[baby]; baby++)
	{
		if (b[baby] < '0' || b[baby] > '1')
			return (0);
		boo = 2 * boo + (b[baby] - '0');
	}

	return (boo);
