#include <stdio.h>

/*This function prints all the numbers from a
  number, all the way to 98 */

void print_to_98(int num)
{
  /*If the number is less than 98 add 1*/
  while(num < 98)
    {
      printf("%d, ", num);
      num = num + 1;
    }  
  /*If the number is greater than 98 subract 1*/
  while(num > 98)
    {
      printf("%d, ", num);
      num = num - 1;
    } 
  /*If the number is 98*/
  printf("%d, ", num);
}
