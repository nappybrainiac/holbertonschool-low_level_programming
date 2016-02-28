#include <stdio.h>

void triangles_in_the_term(int h, int n){

  int stars = 0;
  int spaces = 0;
  int lines = 0;
  int nSave = 0;

  for(nSave = 1; nSave <= n; nSave++){
    for(lines = 1; lines <= h; lines++){
      for(spaces = h - lines; spaces >= 1; spaces--){
	printf(" ");
      }
      for(stars = 1; stars <= ((lines * 2) - 1); stars++){
	printf("*");
      }
      printf("\n");
    }
  }
}
