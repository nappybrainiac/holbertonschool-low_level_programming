#include "../inc/../inc/my_functions.h"

/* This program has been created to print individual 
   characters in a number string, without the use of
   the stdio.h library

   The algorithm that has been created for this purpose
   will do the following things:

   1. It will divide the number by increasing values
      of the multiples of 10, to find out if it is a
      hundredth, or thousandth, and so on.
   2. Finally, it will print out the numbers one by one.
*/


/* Main Function */



void print_number (int n) {

  /*------------ Declaring the variables --------------*/

  int numStore = n;
  int numPrint;
  int power = 10;

  /*----------------- if statements -------------------*/
 
  if (n == 0) {             /* If the number is 0 print '0' */ 
    print_char('0');
  }

  if (n < 0) {             
    print_char('-');       /* If the number is -ve print '-'*/
    n = n * -1;            /* Make the number +ve */
  }

  numStore = n;
  

  /*--------------------- The Loops -------------------*/


  /* This loop is to help find the first multiple of 10
     that n should be divided by in the final printing
     loop.*/


  while(numStore > 9) {
    numStore = numStore / 10;
    power = power * 10;
  }

  numStore = n; 
  power = power / 10;

   /* The first loop will generate a multiple of 10 that is 
      10 times greater than the actual value we need. So 
      it has to be set.*/


  /* This loop is used to print out the characters in
     the number string, one by one, through a set of 
     mathematical operations.*/

  while(numStore > 0) {
    
    numPrint = numStore / power;
    print_char(48 + numPrint);
    numStore = numStore % power;
    power = power / 10;
    } 
}
