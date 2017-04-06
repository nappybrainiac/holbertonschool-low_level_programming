#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function to print and returns # of nodes in a list
 * @h: pointer to the head of a list
 *
 * Return: counts the elements of a listint_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
