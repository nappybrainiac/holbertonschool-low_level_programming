#include <stdio.h>

/*The main function cannot return anything other
  than an int.
  This is the famous fizzbuzz program. It prints Fizz
  if the number is divisible by 3, Buzz if it is divisible 
  by 5, and FizzBuzz if it is divisible by both
  3 and 5.
*/

int main(void)
{

  /* Variable Declaration */
  int num = 1;


  for(num = 1; num <= 100; num++)
    {
      if(num % 3 == 0 && num % 5 == 0) /* if num is divisible by both 3 and 5 */
	{
	  printf("FizzBuzz ");
	}
      else if(num % 3 == 0)            /* if num is divisible by 3 */
	{
	  printf("Fizz ");
	}
      else if(num % 5 == 0)            /* if num is divisible by 5 */
	{
	  printf("Buzz ");
	}
      else
	{
	  printf("%d ", num);          /* otherwise print the number*/
	}  
    }
  return (0);
}
