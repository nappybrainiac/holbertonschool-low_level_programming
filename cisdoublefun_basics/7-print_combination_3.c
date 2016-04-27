#include "my_functions.h"

void print_combination_3(void){
  int i = 0;
  int j = 0;
  int k = 0;

  while(i <=9){
    j = i + 1;
    while(j <= 9 && j > i){
      k = j + 1;
      while(k <= 9 && k > j){
        print_char(48 + i);
        print_char(48 + j);
        print_char(48 + k);
        if(i < 7){             /* So the comma doesn't print at the end */
          print_char(44);
          print_char(32);
        }
        k++;
      }
      j++;
    }
    i++;
  }


}
