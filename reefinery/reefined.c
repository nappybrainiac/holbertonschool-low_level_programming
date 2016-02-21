#include "my_functions.h"

/* Write a function that draws a square 
   with side size n on the terminal, without
   using stdio.h */

void print_square(int n)
{
  int ncopy = 0;
  int sides = 0;

  if(n < 1) { /*If n is -ve, don't print anything*/
      print_char(4); 
    }
  if(n == 1) {  /*If n is equal to 1, print 'o'*/
      print_char('o');
      print_char(10);
    }
  if(n > 1) { /*If n is greater than 1 print a square*/
      top_bottom(n);
      middle_stuff(n);
      top_bottom(n);
    }  
}
