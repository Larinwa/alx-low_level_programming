
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - A function that print strings followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * ap = love, i = life, string = my (Declaration).
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list life;
	unsigned int life = 0;
	char *my;

	va_start(love, n);
	for (; life < n; life++)
	{
		my = va_arg(love, char*);
		if (my == NULL)
			printf("(nil)");
		else
			printf("%s", my);
		if (separator == NULL)
			continue;
		if (life < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(love);
}
