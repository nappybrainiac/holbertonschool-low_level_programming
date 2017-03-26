#include <stdlib.h>
#include "lists.h"

/* Adds a new node to the beginning of a linked list */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return 0;
}
