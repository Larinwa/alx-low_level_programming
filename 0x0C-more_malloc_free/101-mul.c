#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int val1, val2, val, i, carry, dig1, dig2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_dig(s1) || !is_digit(s2))
		errors();
	val1 = _strlen(s1);
	val2 = _strlen(s2);
	val = val1 + val2 + 1;
	result = malloc(sizeof(int) * val);
	if (!result)
		return (1);
	for (i = 0; i <= val1 + val2; i++)
		result[i] = 0;
	for (val1 = val1 - 1; val1 >= 0; val1--)
	{
		dig1 = s1[val1] - '0';
		carry = 0;
		for (val2 = _strlen(s2) - 1; val2 >= 0; val2--)
		{
			dig2 = s2[val2] - '0';
			carry += result[val1 + val2 + 1] + (dig1 * dig2);
			result[val1 + val2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[val1 + val2 + 1] += carry;
	}
	for (i = 0; i < val - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
