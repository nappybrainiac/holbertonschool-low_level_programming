#include "my_functions.h"

/**/

void print_combination_1(void){

  int n = 0;

  while(n < 9){
    print_char(48 + n);
    print_char(',');
    print_char(' ');
    n++;
  }

  print_char(48 + n);
}
