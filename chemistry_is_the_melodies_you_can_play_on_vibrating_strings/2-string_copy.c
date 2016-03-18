#include "my_functions.h"

char *string_copy(char *dest, const char *src){

  int i;
  int j;

  /* Loop to add characters from src to the end of dest*/
  for(j = 0; src[j] != '\0'; j++){
    dest[i] = src[j];
    i++;
  }
  return dest;

}
