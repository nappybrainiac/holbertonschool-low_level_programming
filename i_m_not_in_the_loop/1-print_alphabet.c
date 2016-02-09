#include "my_functions.h"

void print_alphabet(void) /*This function prints out all the letters of the alphabet.*/
{
  char c;
  for (c = 'a'; c <= 'z'; ++c) 
    {
      print_char(c);
    }
}
