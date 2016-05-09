/*
 *     my_functions.h
 *
 *     This header file contains all the prototypes of the functions
 *     created for the project, Linked Lists @ Holberton School
 *     of computing wizardry.
 *
 *     by Gloria Bwandungi, 2016.
 */

/* Task 0: Add node
 * This function allocates a new node and adds it to the
 * beginning of a list.
 */
int add_node(List **list, char *content);

/* Task 1: Add node 2
 * This function allocates a new node and adds it to the
 * end of a list.
 */
int add_node(List **list, char *content);

/* Task 2: Params to list
 * This function creates a new list provided at the command
 * line.
 */
List *params_to_list(int ac, char **av);

/* Task 3: List Size
 * This function returns the number of nodes in a given list.
 */
int list_size(List *list);

/* Task 4: Print List
 * This function prints each element of a given list.
 * beginning of a list.
 */
void print_list(List *list);

/* Task 5: Free List
 * This function frees up memory that had been allocated
 * to a list.
 */
void free_list(List *list);

/* Task 6: Reverse List
 * This function reverses the order of the nodes in a list.
 */
void rev_list(List **list);

/* Task 7: Insert in List
 * This function creates a node and then inserts it in a
 * specific location(index).
 */
int insert_in_list(List **list, char *content, int index);

/* Task 8: Remove From List
 * This function removes a node from a list and then frees
 * the memory that had been allocated to it.
 */
void remove_from_list(List **list, int index);
