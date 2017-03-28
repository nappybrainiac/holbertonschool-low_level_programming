#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - to free a list of type struct listint_t.
 * @head: Current head node of type struct listint_t.
 *
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *node_tr;

	current = *head;

	if (head == NULL)
	{
		return 1;
	}

	while (current)
	{
		node_tr = current->next;
		free(current);
		current = node_tr;
	}
	*head = NULL;
}
