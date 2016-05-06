/*
 *     Filename:        3-free_string_struct.c
 *     Dependent files: 1-string_to_struct.c, 2-main.c
 *     Project Name:    Macros & Structures.
 *
 *     This function in this file frees up the memory that had
 *     been assigned to struct String str.
 *
 *     by Gloria Bwandungi, 2016.
 */

#include <stdlib.h> /* in order to use the function free */
#include "str_struct.h" /* where the definition of struct String is */

void free_string_struct(struct String *str){

    free(str);    /* the free command is used to free up memory
                   * that has been assigned by calloc, realloc and malloc.
                   */

  /* Check the memory to find out whether the function
   * worked correctly by using:
   * valgrind 3-free_string_struct
   */
}
