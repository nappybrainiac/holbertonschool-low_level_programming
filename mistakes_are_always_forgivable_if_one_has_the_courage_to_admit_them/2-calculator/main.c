#include <stdlib.h>
#include <stdio.h>
int (*get_op_func(char c))(int a, int b);

int main(int arc, char *argv[]){
  int i;
  int j;
  int number;

  if (arc != 4){
    printf("Incorrect number of arguments.\n");
  } else {
    i = atoi(argv[1]);
    j = atoi(argv[3]);

    number  = ((*get_op_func(*argv[2]))(i, j));
    printf("%d\n", number);
  }
  return 0;
}
