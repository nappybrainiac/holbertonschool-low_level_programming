#include "../inc/my_functions.h"

/* This function is a continuation of what strncat works like. */


char *string_ncopy(char *dest, const char *src, int n)
{
  int i;

  for (i = 0; i < n && src[i] != '\0'; i++){
      dest[i] = src[i];
    }
  for ( ; i < n; i++) {
      dest[i] = '\0';
    }
  return dest;
}
