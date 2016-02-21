#include "my_functions.h"

void top_bottom(int n)
{
  int ncopy = 0;

  print_char('o');
  for(ncopy; ncopy < (n-2); ncopy++)
    {
      print_char('-');
    }
  print_char('o');
  print_char(10);
}
