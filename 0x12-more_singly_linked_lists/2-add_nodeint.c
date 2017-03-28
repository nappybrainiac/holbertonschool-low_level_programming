#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node to the top of a linked list.
 * @head: Current head node of type struct listint_t.
 * @n: The value for the new node.
 *
 * Return: listint_t.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
