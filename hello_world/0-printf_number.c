#include "my_functions.h"

/* Main Function */

void print_number (int n) {

  /* Declaring variables*/

  int numStore;
  int i = n;
  int num = n;
  int num_re = n;
  int power = 10;
  int count;
  int num_p;



  /* if statements */

  if (n == 0) {
    print_char('0');
  }

  if (n < 0) {
    print_char('-');
    numStore = n * -1;
    i = n * -1;
    num = n * -1;
  }

  /* The Loops */


  /* The Count */

  while(num_re > 0) {
    num_re= numStore / power;
    power = power * 10;
  }
  power = power / 10;


  while(i > 0) {
    i = i / 10;
    count = count + 1;
  }

  while(count > 0) {
    num_p = num / power;
    print_char(48 + num_p);
    num = num - (num_p * 10);
    power = power/10;
    count = count - 1;
  }
}
