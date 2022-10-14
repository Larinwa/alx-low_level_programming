#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that print numbers followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 * (baby = i, boo = nums
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int baby = 0;
	int boo;

	va_start(ap, n);
	for (; baby < n; baby++)
	{
		boo = va_arg(ap, int);
		printf("%d", boo);
		if (separator == NULL)
			continue;
		if (baby < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
