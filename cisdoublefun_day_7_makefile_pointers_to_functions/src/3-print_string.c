#include "../inc/my_functions.h"

void print_string(char *str){
  
  int a = 0;

  while(*(str + a) != 0){     /*Add increasing values of a to str*/
    print_char(*(str + a));
    a++;
  }
}
