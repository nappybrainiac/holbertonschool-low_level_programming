#include <stdio.h>

void triangles_in_the_term(int h, int n){

  int stars = 0;
  int spaces = 0;
  int lines = 0;
  int nSave = 0;

  for(nSave = 1; nSave <= n; nSave++){                       /*Determines the number of triangles to be printed*/
    for(lines = 1; lines <= h; lines++){                     /*Determines the number of lines per triangle to be printed*/
      for(spaces = h - lines; spaces >= 1; spaces--){        /*Determines the number of spaces per line*/
	printf(" ");
      }
      for(stars = 1; stars <= ((lines * 2) - 1); stars++){   /*Determines the number of stars per line*/
	printf("*");
      }
      printf("\n");                                          /*New line*/
    }
  }
}
