int power(int x, int y){
  int i = 0;
  long int pow = 1;               /* Place to store the number */

  if(y < 0){                 /* If y = 0 return -1 */
    return -1;
  } else if (x < 0){         /* If x = 0 return -1 */
    return -1;
  }
  while(i < y){
    if(pow > 2147483647){    /* When power becomes larger */
      return -1;
    }
    pow *= x;                /* Increase the value of pow by x */
    i++;
  }
  return pow;
}
