#include "lists.h"

/**
 * free_listint2 - A function that frees a list and sets head to NULL
 * @head: A pointer to listint_t structure
 * Return: Nothing
 * temp: baby
 */
void free_listint2(listint_t **head)
{
	listint_t *baby;

	if (head == NULL)
		return;

	baby = *head;
	while (*head)
	{
		baby = *head;
		(*head) = (*head)->next;
		free(baby);
	}
	*head = NULL;
}
