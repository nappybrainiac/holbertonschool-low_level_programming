#include "my_functions.h"
#include <limits.h>

int main(void)
{
  print_number(98);
  print_char('\n');
  print_number(402);
  print_char('\n');
  print_number(1024);
  print_char('\n');
  print_number(0);
  print_char('\n');
  print_number(-98);
  print_char('\n');
  print_number(INT_MIN);
  print_char('\n');
  print_number(INT_MAX);
  print_char('\n');  
  return (0);
}
