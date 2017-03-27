#include <stdlib.h>
#include "lists.h"

/**
 * to free the memory being held by a linked list
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
