#include <stdio.h>
#include "lists.h"

/**
 * print_listint - to print the values in the list.
 * @h: Current head node of type struct listint_t.
 *
 * Return: size_t.
 */
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
