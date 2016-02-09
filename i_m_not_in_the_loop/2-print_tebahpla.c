#include "my_functions.h"

void print_tebahpla(void) /*This function prints out all the letters of the alphabet, but backwards.*/
{
  char c;
  for (c = 'z'; c >= 'a'; --c)
    {
      print_char(c);
    }
}
