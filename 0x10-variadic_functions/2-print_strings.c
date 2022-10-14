#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that print strings followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * ap = mine, i = myself, string = me (Declaration).
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mine;
	unsigned int myself = 0;
	char *me;

	va_start(mine, n);
	for (; myself < n; myself++)
	{
		me = va_arg(mine, char*);
		if (me == NULL)
			printf("(nil)");
		else
			printf("%s", me);
		if (separator == NULL)
			continue;
		if (myself < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(mine);
}
