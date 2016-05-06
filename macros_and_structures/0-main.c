#include <stdio.h>
#include <limits.h>
#include "0-abs.h"

int main(void)
{
  int i;

  i = INT_MIN;
  printf("i=%d, abs(i)=%d\n", i, ABS(i));
  return (0);
}
