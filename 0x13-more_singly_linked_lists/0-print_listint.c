#include "lists.h"
#include <stdio.h>

/**

 * print_listint - A function that prints all the elements in the list

 * @h: A pointer to listint structure

 * Return: the number of nodes

 * nodes: okay

 */

size_t print_listint(const listint_t *h)

{

	size_t okay = 0;



	while (h)

	{

		printf("%d\n", h->n);

		h = h->next;

		okay++;

	}

	return (okay);

}
