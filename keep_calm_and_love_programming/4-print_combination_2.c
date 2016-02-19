#include "my_functions.h"

/*This function prints unique combinations of two digits
  however, it doesn't print multiples of 11. */

void print_combination_2(void)
{
  int num1 = 0;
  int num2 = 0;

  /* This loop prints all the values of the first number 0-9 */
  for (num1 = 0; num1 <= 9; num1++)
    {
      /* This loop prints the second number from (num1 + 1) to 9 */
      for (num2 = num1 + 1; num2 <= 9; num2++)
	{
	  print_char((num1 + 48));
	  print_char((num2 + 48));

	  /*This conditional makes sure that the last number is
            not printed with a ", " following it*/
	  if(num1 < 8)
	    {
	      print_char(',');
	      print_cjar(' ');
	    }  
	}
    }
}
