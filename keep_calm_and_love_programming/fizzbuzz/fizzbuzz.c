#include <stdio.h>

int main(void)
{

  int num = 1;
  for(num = 1; num <= 100; num++)
    {
      if(num % 3 == 0 && num % 5 == 0)
	{
	  printf("FizzBuzz ");
	}
      else if(num % 3 == 0)
	{
	  printf("Fizz ");
	}
      else if(num % 5 == 0)
	{
	  printf("Buzz ");
	}
      else
	{
	  printf("%d ", num);
	}  
    }
  return (0);
}
