#include "my_functions.h"

void print_string(char *str){

  while(*str != '\0'){
    print_char(*str);
    str += 1;
  }

}
