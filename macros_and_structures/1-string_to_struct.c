/*
 *     Filename:        1-string_to_struct.c
 *     Dependent files: str_struct.h, 1-main.c.
 *
 *     This file contains a function that stores a string and it's
 *     length in a newly allocated structure, then returns the
 *     address of the new structure.
 *
 *     by Gloria Bwandungi, 2016.
 */

#include "str_struct.h"
#include <stdlib.h>

/* Other functions used in string_to_struct */
int length(char *s);  /* To find the length of the string */
void print_string_struct(struct String *str); /* Print new struct */

struct String *string_to_struct(char *str){

  /* Declaring the new struct */
    struct String *new_string;

  /* Allocate memory for the new struct */
    new_string = malloc(sizeof(struct String));
    /* If memory allocation fails return NULL*/
    if (new_string == NULL){
         return NULL;
    }

  /* Assign values to the new struct */
    new_string->str = str;
    new_string->length = length(str);

  /* Return the address of the new struct*/
    return new_string;
}

/* This function returns the length of the string */
int length(char *s){
  int i = 0;

  while(*(s + i) != '\0'){
    i++;
  }
  return i;
}
