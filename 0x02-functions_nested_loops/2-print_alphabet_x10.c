#include "main.h"
/**
 * print_alphabet_x10 - function print alphabet ten times in lowercases
 *
 * Return 0
 */
void print_alphabet_x10(void)
{
	char c, y;

	for (y = 0; y <= 9; y++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
