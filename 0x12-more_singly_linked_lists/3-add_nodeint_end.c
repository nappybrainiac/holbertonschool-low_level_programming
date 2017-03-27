#include <stdlib.h>
#include "lists.h"

/* Add a new node at the end of the list */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;

	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
	}

	return (current);
}
