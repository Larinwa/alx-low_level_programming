#include "main.h"

/**
 * _strlen_recursion - function use to return string length
 * @s: string
 * Return: Return string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') /*This is the base case*/
		return (0);

	s++;
	return (1 + _strlen_recursion(s));
}
