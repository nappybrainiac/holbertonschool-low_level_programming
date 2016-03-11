#include "my_functions.h"

void print_string_2(char *str){

  while(*str >= '\n'){
      print_char(*str);
      str+=2;
    }
}

