#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c:  this int function will be use for the argument
 * Description: using int _islower(int c) function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
