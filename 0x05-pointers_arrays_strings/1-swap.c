#include "main.h"

/**
 * swap_int - swaps thr value of two integers
 * @a: parameter1
 * @b: parameter2
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
