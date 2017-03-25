/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
  int n;
  struct listint_s *next;
} listint_t;

/* prototype of function in 1-print_listint.c. It returns
   the number of nodes in a list. */
size_t print_listint(const listint_t *h);
