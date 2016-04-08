#include "my_functions.h"
#include <unistd.h>

int str_len(char *s){

  int len = 0;

  while (*(s + len) != 0){   /*All strings in C end with '0' so we use it */
    len ++;                  /*to detect the end of the string.*/
  }
  return len;

}

int print_char(char c)
{
  return (write(1, &c, 1));
}

void reverse_string(char *s)
{
  int i,j,len;
  char c;
  len = str_len(s);

  for (i = 0, j = len - 1; i < ((len - 1) / 2); i++, j--)
    {
      c = *(s + i);
      *(s + i) = *(s + j);
      *(s + j) = c;
    }
}

/*
void reverse_string(char *s){

  int a = str_len(s);
  printf("%d\n", a);

  while(a >= 0) {
    print_char(*(s + a));
    a--;
  }

}
*/
