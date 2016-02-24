#include "my_functions.h"
#include <limits.h>

/* This program has been created to print the first
   digit of a given number.
*/

int first_digit(int n) {

  int numStore = 0;
  if (n == 0) {                          /* If the number is 0 print '0' */
    return(0);
  }
  if (n == INT_MIN || n == INT_MAX) {   /* If the number is INT_MIN or INT_MAX print '2' */
    return(2);
  }
  if (n < 0) {
    n = n * -1;                         /* Make the number +ve */
  }
  numStore = n;
  if (n > 0) {
    while(numStore > 9) {
      numStore = numStore / 10;
    }
  }  
  return (numStore);
}
