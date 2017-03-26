#include <stdio.h>
#include "lists.h"

/* returns the number of nodes in a linked list */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *head = h;

	while (head != NULL)
	{
		head = head->next;
		i++;
	}

	return (i);
}
