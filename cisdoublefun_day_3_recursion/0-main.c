#include <stdio.h>
int factorial(int n);

int main(void)
{
  int r;

  r = factorial(1);
  printf("%d\n", r);
  r = factorial(5);
  printf("%d\n", r);
  r = factorial(10);
  printf("%d\n", r);
  r = factorial(-1024);
  printf("%d\n", r);
  r = factorial(-2147483648);
  printf("%d\n", r);
  r = factorial(12);
  printf("%d\n", r);
  r = factorial(13);
  printf("%d\n", r);
  return (0);
}
