#include "my_functions.h"

/* This is a function that reverses the content 
   of an array of integers. */

void reverse_array(int *a, int n){
  int store;
  int half;
  int i;
  n -= 1;
  half = n / 2;
  for (i = 0; n > half; n--){
      store = a[n]; /* store last char in temp */
      a[n] = a[i]; /* assign last character as first */
      a[i] = store; /* assign first character as temp */
      i++; 
    }
}
