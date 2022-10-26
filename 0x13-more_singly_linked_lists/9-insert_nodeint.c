#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - insert a node at index
  * @head: head of the list
  * @index: location to insert node
  * @n: value of the inserted node
  * Return: pointer to head of list
  * present: Current
  * now: New
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *present, *now;

	present = *head;
	now = malloc(sizeof(listint_t));
	if (now == NULL)
		return (NULL);
	now->n = n;
	if (index == 0)
	{
		now->next = present;
		*head = now;
		return (*head);
	}
	while (index > 1)
	{
		present = present->next;
		index--;
		if (!present)
		{
			free(now);
			return (NULL);
		}
	}
	now->next = present->next;
	present->next = now;
	return (now);
}
