#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 * @head: A pointer to listint_t structure
 * Return: Nothing
 * temp: cord
 */
void free_listint(listint_t *head)
{
	listint_t *cord;

	while (head)
	{
		cord = head;
		head = head->next;
		free(cord);
	}
	free(head);
}
