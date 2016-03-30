/* This function calculates the value of n! */
int factorial(int n) {

  /* Establishing the smallest value for this
     function to work.
     ie
     4! = 4 * 3! 
     3! = 3 * 2!
     2! = 2 * 1!
     1! = 1
     */
  if(n == 1 || n == 0) {
    return 1;
  }
  if(n < 0) {
    return -1;
  }
  return n * factorial(n - 1);
}
