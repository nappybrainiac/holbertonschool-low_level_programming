#include <stdio.h>

int main(void){
  
  int i;
  for (i = 1; i <= 100; i++){
    if (i % 5 == 0){                      /* If divisible by 3, then Fizz */
          printf("Buzz ");
        }
    else if (i % 3 == 0){                /* If divisible by 5, then Buzz */
          printf("Fizz ");
        }
    else if (i % 5 == 0 && i % 3 == 0){ /* If divisible by 3 and 5, then print FizzBuzz */
          printf("FizzBuzz ");
        }
      else{
	printf("%d ", i);              /* Print the value of i */
        }
    }
  return(0);
}
