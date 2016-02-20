#include "my_functions.h"

/*This function prints unique combinations of two digits                                                                                                     
  however, it doesn't print multiples of 11. */

void print_combination_4(void)
{
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int num4 = 0;


  /* This loop prints all the values of the first number 0-9 */
  for (num1 = 0; num1 < 10 ; num1++)
    {
      /* This loop prints the second number from 0 to 9 */
      for (num2 = 0; num2 < 10; num2++)
        {
	  /* This loop prints the third number from 0 to 9 */
	  for(num3 = 0; num3 < 10; num3++)
	    {
	      /* This loop prints the fourth number from 1 to 9 */
	      for(num4 = num2 + 1; num4 < 10; num4++)
		{
		  print_char(' ')
		   print_char((num1 + 48));
		   print_char((num2 + 48));
		   print_char(' ');
		   print_char((num3 + 48));
		   print_char((num4 + 48));
		   print_char(',');

		}
            }
        }
    }
}
