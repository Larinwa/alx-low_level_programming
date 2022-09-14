#include "main.h"
/**
 * _islower - function to check for lowercases character
 * c - this int function will be use for the argument
 * Retutn 0
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
