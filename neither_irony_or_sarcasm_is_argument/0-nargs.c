/*This program prints the number of arguments
  passed on the command line.*/

#include <stdio.h>
 
int main(int ac, char **av) {
  int i;

  for(i = 0; i < ac; i++){
    /*The line below doesn't do anything
      it's just to accomodate the use of
      av.*/
    av++;
  }
  printf("%d\n", i - 1);
  return 0;
}
