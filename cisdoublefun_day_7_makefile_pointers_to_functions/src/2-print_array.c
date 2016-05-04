#include "../inc/my_functions.h"

void print_number(int num);

void print_array(int *a, int n){

  int i;

  if(n <= 0){
    print_char('\n');
  }
    for(i = 0; i < n; i++){
      if(i == (n - 1)){
	print_number(*(a + i));
      } else {
	print_number(*(a + i));
	print_char(',');
	print_char(' ');
      }
    }
    print_char('\n');
}


/* Print Number Function*/



void print_number(int num) {

  int numStore = num;
  int numPrint;
  int power = 10;

  if (num == 0) {             /* If the number is 0 print '0' */ 
    print_char('0');
  }

  if(num == -2147483648){     /* To accommodate INT_MIN */
    print_char('-');
    print_char('2');
    num = 147483648;
  }

  if(num == 2147483647){      /* To accommodate INT_MAX*/
    print_char('2');
    num = 147483647;
  }

  if (num < 0) {
    print_char('-');          /* If the number is -ve print '-'*/
    num = num * -1;           /* Make the number +ve */
  }


  numStore = num;
  

  /* This loop is to help find the first multiple of 10
     that n should be divided by in the final printing
     loop.*/


  while(numStore > 9) {
    numStore = numStore / 10;
    power = power * 10;
  }

  numStore = num; 
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
