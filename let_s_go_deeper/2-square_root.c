/* This function calculates the natural square root
   of a number (as long as the root is less than
   100,000,000. */

int square_root(int n) {

  int x;
  
  if(n < 1) {
    return -1;
  }

  for(x = 1; (x * x) != n; x++){
    /* This checks to find out if the number 
       becomes outrageously large. It's a hack
       but works for the current main.c file.*/
    if (x > 100000000){
      return -1;
    }
  }
  return x;

}
