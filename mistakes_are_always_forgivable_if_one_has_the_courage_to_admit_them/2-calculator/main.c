#include <stdlib.h>
#include <stdio.h>
int (*get_op_func(char c))(int a, int b);

int main(int arc, char *argv[])
{
  int i;

  int (*func)(int a, int b);

  if (arc != 4)/*This is the parameters are incomplete, there has to be 4 ./a.out int char int*/
    {
      return 1;
    }
  func = get_op_func(*argv[2]);
  if (func == 0)
    {
      return 1;
    }
  i = func(atoi(argv[1]),(atoi(argv[3])));
  printf("%d\n",i);
  return 0;

}
