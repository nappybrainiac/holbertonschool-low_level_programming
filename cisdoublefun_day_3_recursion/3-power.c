int power(int x, int y){

  if(y < 0){                 /* If y = 0 return -1 */
    return -1;
  } else if (x < 0){         /* If x = 0 return -1 */
    return -1;
  } else if (y == 0){        /* Base case */
    return 1;
  } else if (x > 2147483647/ power(x, (y-1))){ /* Handling overflow */
    return -1;
  }

  return x * power(x, (y - 1)); /* Recursive function call*/
}
