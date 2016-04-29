
int factorial(int n) {

  if (n < 0) {         /* For values below 0 return -1 */
    return -1;
  } else if (n > 12){  /* For unstorable ints return -1 */
    return -1;
  } else if(n == 0){   /* For 0 return 1 */
    return 1;
  }
  return n * factorial(n - 1);
}
