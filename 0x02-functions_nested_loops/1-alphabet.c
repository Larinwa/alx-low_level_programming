#include "main.h"

/*
 * main - print alphabets
 *
 * Description: use main function
 * print alphabet in lowercases
 * Return 0
 */
void print_alphabet(void)
{
	char g;

	for(g= 'a'; g<= 'z'; g++)
	{
		_putchar(g);
	}
	_putchar('\n');

}
