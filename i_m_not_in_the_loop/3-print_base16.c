#include "my_functions.h"

void print_base16(void)
{
  int c = 48; /*Uses the ASCII decimal set for numbers 0-9*/
    while(c <= 57)
    {
      print_char(c);
      ++c;
    }

    c = 65;
    while(c <= 70) /*uses the ASCII decimal set for numbers A-F*/
      {
	print_char(c);
        ++c;
      {
      }
      }
}
