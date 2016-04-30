int square_root(int n){
  int i;             /* Counter for while loop */

  i = n/2;
  if(n < 0) {
    return -1;
  } else if (n > 2147483600) {
    return -1;
  } else if (n == 1) {
    return 1;
  }

  while(i > 0){
    if(i * i == n){
      return i;
    }
    i--;
  }
  return -1;
}
