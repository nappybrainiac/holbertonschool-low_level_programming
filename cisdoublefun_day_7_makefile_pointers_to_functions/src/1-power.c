/* This function calculates the value of x^y. */

int power(int x, int y) {

  if( x < 0 || y < 0) {
    return -1;
  }
  /* This if statement is invaluable because
     it sets up the function by determining
     what the smallest value is.
     ie
     4^3 = 4 * 4^2
     4^2 = 4 * 4^1
     4^1 = 4 
     This will work for any value of y.*/
  if(y == 1) {
    return x;
  }
  if(y == 0) {
    return 1;
  }
  return x * power(x, y-1);
}
