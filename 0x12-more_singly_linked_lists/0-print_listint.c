#include <stdio.h>
#include "lists.h"

/* prints the value (n) of each node and the number of nodes */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	const listint_t *head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}
	return (i);
}
