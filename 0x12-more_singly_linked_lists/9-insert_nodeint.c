#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - returns a node that has been
 * inserted at a specific index.
 * @head: Current head node of type struct listint_t.
 * @idx: Index where the node is to be inserted.
 * @n: new node's data
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
	/* does the list exist? Is the index +ve whole number? */
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
			/* iterate through list to reach (idx-1)th node */
			while (i < (idx - 1))
			{
				current = current->next;
				i++;
			}
			/* break connections between nodes where new node should go */
			post_node = current->next->next;
			current->next = new_node;
			new_node->next = post_node;
			}
	}
	return (new_node);
}
