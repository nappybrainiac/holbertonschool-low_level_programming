
int factorial(int n) {
  int i = 1;           /* This is the counter for Loop use */
  int fac = 1;         /* This is the base case for the recursion */

  if (n < 0) {         /* For values below 0 return -1 */
    return -1;
  } else if (n > 12){  /* For unstorable ints return -1 */
    return -1;
  } else if(n == 0){   /* For 0 return 1 */
    return 1;
  } else {
    while(i <= n){
      fac *= i;
      i++;
    }
  }
  return fac;
}
