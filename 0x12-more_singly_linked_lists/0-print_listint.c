#include <stdio.h>
#include "lists.h"

/*
 * linstint_t - singly linked lists
 * @h: head of the list (first node)
 * @next: next node in the lists
 *
 * This function returns the number of nodes in the
 * provided linked list.
 */
size_t print_listint(const listint_t *h)
{
 	size_t i = 0;
	const listint_t * head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}
	return (i);
}
