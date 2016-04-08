/* These functions are to determine whether a number
   provided by 3-main.c is a prime number or not.

   It uses two functions, one recursive, one not, to
   make the determination. */

int prime_or_nah(int n, int i){

  /* A number is considered to be a prime number
     if it's only factors are 1 and itself.*/

  if(n < 0){
    n = n * -1;
  }

  if(n < 2){                  /*n cannot be 0 or 1*/
    return 0;
  }else if(i > n - 1){        /*For i greater than n-1*/
    return 1;
  }else if(n % i == 0){       /*n must not be divisible by itself.*/
    return 0;
  }

  /* Here is the recursion. Increase the value of
     i by 1 and try this again.*/
  return prime_or_nah(n, i + 1);
}

int is_prime_number(int n){
  return prime_or_nah(n, 2); /* We start at i = 2*/
}
