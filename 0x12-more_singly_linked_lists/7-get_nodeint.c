#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the value of a node at a
 * specific index.
 * @head: Current head node of type struct listint_t.
 * @index: The node number in the list.
 *
 * Return: returns the value n, of the node at the index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;
	
	i = 0;

	if (head != NULL)
	{
		current = head;

		while (i < index)
		{
			current = current->next;
			i++;
		}

		if (current == NULL)
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
	return (current);
}
