/*
 *     Filename: 1-print_string_struct.c
 *     Dependent files: print_char.c, 1-string_to_struct.c
 *
 *     This file prints the values of member variables in the
 *     newly defined structure new_string, in 1-string_to_struct.c.
 *
 *     by Gloria Bwandungi, 2016.
 */
#include <stdio.h>
#include "str_struct.h"

 void print_string_struct(struct String *str){

   printf("%s, %d\n", str->str, str->length );

 }
