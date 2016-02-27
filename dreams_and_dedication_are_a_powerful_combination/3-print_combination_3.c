#include "my_functions.h"

void print_combination_3(void){

 int num1 = 0;
 int num2 = 0;
 int num3 = 0;

 /* This loop prints all the values of the first number 0-9 */
 for (num1 = 0; num1 <= 9; num1++){
    /* This loop prints the second number from (num1 + 1) to 9 */
    for (num2 = num1 + 1; num2 <= 9; num2++){
	/* This loop prints the third number from (num1 + 1) to 9 */
	for (num3 = num2 + 1; num3 <= 9; num3++){
	    print_char((num1 + 48));
	    print_char((num2 + 48));
	    print_char((num3 + 48));
	    /*This conditional makes sure that the last number is
	      not printed with a ", " following it*/
	    if(num1 < 7){
	      print_char(',');
	      print_char(' ');
	    }
	  }
      }
  }
}
