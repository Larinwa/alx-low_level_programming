#include "main.h"

/**
 * is_divisible - Checks if a number is divisible.
 * @number: The number to be checked.
 * @divi: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int is_divisible(int number, int divi)
{
	if (number % divi == 0)
		return (0);

	if (divi == number / 2)
		return (1);

	return (is_divisible(number, divi + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int divi = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, divi));
}
