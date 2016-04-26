#include "my_functions.h"

void print_tebahpla(void){
  int i = 122;                  /* The ASCII for 'z' */
  while(i > 96){                /* The ASCII just before 'a' */
    print_char(i);
    i--;
  }
}
