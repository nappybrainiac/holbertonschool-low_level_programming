#include "my_functions.h"

/* This function prints the last number of any
   integer.

   If you divide the number by 10, the remainder
   will be the last number.
*/

void print_last_digit(int num)
{
  if(num < 0)
    {
      num = (num * -1);        /* If the number is -ve make it +ve */
    }
  if(num > 9)                  /* If the number is greater than 9*/
    {
      num = num % 10;          /* Get the remainder from % 10 */ 
    }
  
  print_char(48 + num);        /* Print the character */
}
