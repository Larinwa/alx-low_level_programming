#include "main.h"

/**
 * _print_rev_recursion - function used to print string in reverse
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0') /*This is the base case*/
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
