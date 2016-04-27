#include "my_functions.h"

void print_triangle(int n){
  int lines = 1;
  int lines2 = n - 1;

  if(n <= 0){
    print_char('0');
  }
  while(lines <= n){         /* Prints the top half of the triangle */
    int height = 1;
    while(height <= lines){
      print_char('*');
      height++;
    }
    print_char('\n');
    lines++;
  }
  while(lines2 > 0){          /* Prints the bottom half of the triangle */
    int height2 = lines2;
    while(height2 > 0){
      print_char('*');
      height2--;
    }
    print_char('\n');
    lines2--;
  }

}
