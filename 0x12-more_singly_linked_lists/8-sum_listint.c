#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of the node values.
 * @head: Current head node of type struct listint_t.
 *
 * Return: returns the sum of all nodes in the list.
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	unsigned int sum = 0;

	if (head != NULL)
	{
		current = head;

		while (current)
		{
			sum += current->n;
			current = current->next;
		}
	}
	return (sum);
}
