#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes the node at
 * specified index from list
 * @head: A pointer to listint_t structure
 * @index: The index of the node to delete
 * Return: 1 if succeeded, or -1 if it failed
 * temp-Myself, dnode-mine, i-me.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *Myself, *mine;
	unsigned int me = 1;

	if (*head == NULL)
		return (-1);

	Myself = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(Myself);
	}
	else
	{
		while (me < index)
		{
			Myself = Myself->next;
			if (Myself == NULL)
				return (-1);
			me++;
		}
		mine = Myself;
		mine = mine->next;
		Myself->next = mine->next;
		free(mine);
	}
	return (1);
}
