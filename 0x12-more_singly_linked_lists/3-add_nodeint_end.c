#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the end of a linked list.
 * @head: Current head node of type struct listint_t.
 * @n: The value for the new node.
 *
 * Return: listint_t.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = NULL;
	if (new_node == NULL)
	{
		return (NULL);
	}

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
	return (new_node);
}
