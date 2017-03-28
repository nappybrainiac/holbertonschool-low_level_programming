#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the value of a node at a
 * specific index.
 * @head: Current head node of type struct listint_t.
 * @index: The node number in the list.
 *
 * Return: returns the value n, of the popped node.
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
