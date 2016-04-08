#include "my_functions.h"

void positive_or_not(int n) /*This function tells you if a number is positive or negative*/
{
  if (n > 0)
    {
      print_char('P');
    }
  if (n < 0)
    {
      print_char('N');
    }
  if (n == 0)
    {
      print_char('Z');
    }
}
