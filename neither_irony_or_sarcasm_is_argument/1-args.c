/*This program prints out the arguments 
  passed on the command line.*/

#include <stdio.h>

int main(int ac, char **av){

  int i;

  for(i = 0; i < ac; i++){
    printf("%s\n", av[i]);
  }
  return 0;

}
