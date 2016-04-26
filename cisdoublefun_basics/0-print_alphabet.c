#include "my_functions.h"

void print_alphabet(void){
  int i = 97;           /* This initializes the value of i to a's ASCII value*/

  while(i < 123){       /* 122 is the ASCII value of 'z' */
    print_char(i);
    i++;                /* could have used ++i here as well*/
  }
}
