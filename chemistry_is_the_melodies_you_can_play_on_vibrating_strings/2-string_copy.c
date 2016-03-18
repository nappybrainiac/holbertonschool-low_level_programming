#include "my_functions.h"

/* This function takes an array and a string of characters
   as parameters, then it copies the string into the array
   just like using strcpy would. */

char *string_copy(char *dest, const char *src){

  int i;
  int j;

  /* This loops adds src characters to dest */
  for(j = 0; src[j] != '\0'; j++){
    dest[i] = src[j];
    i++;
  }
  return dest;

}
