#include "main.h"

/**
 * _pow_recursion - raise x to power y
 * @x: number
 * @y: power to raise to
 * Return: power of a number, -1 if power less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	int result = 1;
		for (y; y > 0; y--)
		{
			result = result * x;
		}

	return (result);
}
