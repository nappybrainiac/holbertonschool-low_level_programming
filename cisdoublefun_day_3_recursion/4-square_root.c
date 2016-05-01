int square_root(int n){
  int i;             /* Counter for while loop */

  i = n/2;           /* Start at 1/2 of n */
  if(n < 0) {
    return -1;
  } else if (n > 2147483600) {  /* For extreme cases */
    return -1;
  } else if (n == 1 || n == 0) { /* The square root of 1 is 1*/
    return n;
  }

  while(i > 0){
    if(i * i == n){
      return i;
    }
    i--;
  }
  return -1;
}
