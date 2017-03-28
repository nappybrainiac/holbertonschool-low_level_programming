#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the length of a linked list.
 * @h: Current head node of type struct listint_t.
 *
 * Return: size_t.
 */
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
