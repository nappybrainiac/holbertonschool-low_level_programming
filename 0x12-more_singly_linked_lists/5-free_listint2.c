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

	while (current != NULL && head != NULL)
	{
		current = node_tr;
		node_tr = current->next;
		free(current);
	}
	*head = NULL;
}
