#include "../inc/my_functions.h"

/*   This function takes two character arrays and compares
     them. It works like strcmp. */


int strings_compare(char *s1, const char *s2)
{
  return (*s1 - *s2);
}
