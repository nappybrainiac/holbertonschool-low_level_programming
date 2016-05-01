int finding_square(int n, int i){ /* New function with two arguments */

  if(i == 1){     /* When it reaches 1, then this number has no root */
    return -1;
  }
  if(n < 0) {
    return -1;
  } else if (n > 2147483600) {
    return -1;
  } else if (n == 1) {
    return 1;
  }

  if(i * i == n){
    return i;
  }

  return finding_square(n, (i-1));
}

int square_root(int n){
  int i;
  i = n / 2;         /* Start with 1/2 of n*/

  return finding_square(n, i);
}
