
#include "main.h"

/**
 * factorial - function use to find factorial of n
 * @n: number
 * Return: Return factorial of number -1 if n is negative
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
