#include "main.h"
/*
 * print_alphabet - print alphabets
 *
 * Description: print letters in lowercase
 * using void print_alphabeth function
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
