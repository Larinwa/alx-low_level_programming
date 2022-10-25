#include "lists.h"

#include <string.h>



/**

 * add_node_end - A function that adds a node to the end of linked list

 * @head: pointer to a list_t pointer that points to the head struct

 * @str: string to add as node

 * Return: pointer to new element of list, NULL on failure

 * bolly = length

 */

list_t *add_node_end(list_t **head, const char *str)

{

	list_t *new_node, *temp;

	unsigned int bolly = 0;



	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)

		return (NULL);



	while (str[bolly])

		bolly++;



	new_node->len = bolly;

	new_node->str = strdup(str);

	if (*head == NULL)

	{

		new_node->next = *head;

		*head = new_node;

	}

	else

	{

		new_node->next = NULL;

		temp = *head;

		while (temp->next)

			temp = temp->next;

		temp->next = new_node;

	}

	return (new_node);

}
