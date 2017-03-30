#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - returns a node that has been
 * inserted at a specific index.
 * @head: Current head node of type struct listint_t.
 * @idx: Index where the node is to be inserted.
 * @n: new node's data
 *
 * listint_len - returns the number of nodes in a linked list.
 * @h: current head node.
 *
 * Return: returns the sum of all nodes in the list.
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

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current; /* tracker pointer */
	listint_t *new_node; /* new node pointer */
	listint_t *post_node; /* pointer after new node.*/
	unsigned int i = 0; /* iterator */

	current = *head;
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;
	if (head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		if (idx == 0) /* idx == 0, therefore new_node is head */
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		else if (idx > listint_len(*head))
		{
			return (NULL);
		}
		else
		{
			while (i < (idx - 1))
			{
				current = current->next; i++;
			}
			post_node = current->next->next;
			current->next = new_node;
			new_node->next = post_node;
			}
	}
	return (new_node);
}
