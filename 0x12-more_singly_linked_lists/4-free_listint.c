#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - to free a list of type struct listint_t.
 * @head: Current head node of type struct listint_t.
 *
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *current = NULL;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
