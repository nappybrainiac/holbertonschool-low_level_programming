#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - to delete the first node of the linked
 * list and return its value.
 * @head: Current head node of type struct listint_t.
 *
 * Return: returns the value n, of the popped node.
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int value;

	if (head && *head)
	{
		current = *head;
		value = current->n;
		*head = current->next;
		free(current);
	}
	return (value);
}
