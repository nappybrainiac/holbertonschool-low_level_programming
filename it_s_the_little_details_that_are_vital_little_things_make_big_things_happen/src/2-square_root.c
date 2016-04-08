/* These functions are used to find out whether
   a number is a perfect square, and display
   it on the console.

   Because it requires 2 variables, a second
   function was created to handle the
   recursion, and called in the initial function.*/

int square_or_nah(int n, int i){
  /* No perfect squares for negative numbers. */
  if(n < 0){
    return -1;
  }
  if(n == i * i){
    return i;
  }
  if(i * i > n){
    return -1;
  }
  return square_or_nah(n, i + 1);
}


int square_root(int n){
  return square_or_nah(n, 1);
}
