#include "../inc/my_functions.h"

int str_len(char *s){
  
  int len = 0;

  while (*(s + len) != 0){   /*All strings in C end with '0' so we use it */
    len ++;                  /*to detect the end of the string.*/
  }
  return len;
}


