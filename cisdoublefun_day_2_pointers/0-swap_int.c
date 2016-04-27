#include <stdio.h>

void swap_int(int *a, int *b){
  int temp;
  int *t;

  t = &temp;

  *t = *a;   /* the value of a is placed in temp */
  *a = *b;   /* the value of b is placed in a */
  *b = *t;   /* the value of temp is placed in b */

}
