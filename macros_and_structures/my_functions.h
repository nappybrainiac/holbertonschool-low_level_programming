/*
 *     my_functions.h
 *
 *     This header file contains all the prototypes of the functions
 *     created for the project, Macros & Structures @ Holberton School
 *     of computing wizardry.
 *
 *     by Gloria Bwandungi, 2016.
 */

/* This function uses malloc to store a string & it's length
   in a newly allocated structure, then returns the new
   address.
   */
struct String *string_to_struct(char *str);

/* This function prints the contents of a struct String */
void print_string_struct(struct String *str);

/* This function frees up memory allocated to the structure by
   the previous function. */
void free_string_struct(struct String *str);
