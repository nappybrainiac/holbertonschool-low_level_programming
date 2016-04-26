#include "my_functions.h"

char odd(int n){
  if((n & 1) == 1){       /* Bitwise operation to compare the last digit */
    print_char('O');
  }
  else {
    print_char('E');
  }
  return 0;
}
