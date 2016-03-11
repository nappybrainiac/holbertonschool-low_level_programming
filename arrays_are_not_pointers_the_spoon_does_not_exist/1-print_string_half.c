#include "my_functions.h"

void print_string_half(char *str){
  int len = 0;
  int j;

  /* Finding the length of the string */
  while(*(str + len)){
    len++;
  }

  /*Printing the characters*/
  for(j = ((len)/2); j < len; j++){
    print_char(str[j+1]);
  }
}
