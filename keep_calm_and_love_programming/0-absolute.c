#include "my_functions.h"

/* This function has been created to be included
   in my_functions.h library.

   It's primary purpose is to take the value of
   any integer an print its absolute value.

*/


/* Function Declaration*/

int absolute(int n) { 

  if (n == 0) {             /* If the number is 0 print '0' */
    return(0);
  }
  else if (n > 0){          /* If the number is positive, print the number */
    return(n);       
  }
  else {                   /* This presumes that all remaining numbers are -ve */
    return(-n);
 }

}
