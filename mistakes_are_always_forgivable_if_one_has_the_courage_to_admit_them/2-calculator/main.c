#include <stdlib.h>
#include <stdio.h>
int (*get_op_func(char c))(int a, int b);

int main(int arc, char *argv[]){
  int i;
  int j;
  int number;
  int (*p)(int, int);

  /*If there are more or less than 4 arguments...*/
  if (arc != 4)
    return 1;

  p = get_op_func(*argv[2]);

  /*If the second argument returns a value that
    is not recognized...*/
  if(*p == NULL)
    return 1;

  if(arc == 4){
    i = atoi(argv[1]);
    j = atoi(argv[3]);

    number  = ((*get_op_func(*argv[2]))(i, j));
    printf("%d\n", number);
  }
  return 0;
}
