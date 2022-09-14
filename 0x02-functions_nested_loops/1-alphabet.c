#include "main.h"
/*
 * print_alphabet -function prints alphabet
 *
 * Description: print letters in lowercase
 * using print_alphabet(void) function
 * Return 0
 */
void print_alphabet(void)
{
	char g;

	for (g = 'a'; g <= 'z'; g++)
	{
		_putchar(g);
	}
	_putchar('\n');

}
