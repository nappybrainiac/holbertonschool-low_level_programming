#include "my_functions.h"

void print_base16(void){
  int i = 48;
  int j = 65;
  while(i < 58){            /* Prints '0' to '9' */
    print_char(i);
    i++;
  }
  while(j < 71){           /* Prints 'A' to 'F' */
    print_char(j);
    j++;
  }
}
