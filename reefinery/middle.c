#include "my_functions.h"

void middle_stuff(int n)
{
  int sides = 0;
  int ncopy = 0;

  /*print middle spaces*/
  for(sides = 0; sides < (n-2); sides++) {
    print_char('|');
  for(ncopy = 0; ncopy < (n-2); ncopy++) {
    print_char(32);
  }
  print_char('|');
  print_char(10);
 }
}
