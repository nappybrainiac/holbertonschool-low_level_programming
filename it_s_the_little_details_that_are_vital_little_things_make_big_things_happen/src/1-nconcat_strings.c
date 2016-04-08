#include "../inc/my_functions.h"

char *nconcat_strings(char *dest, const char *src, int n){

  /* This function takes two character arrays and an integer 
     as parameters. n number of characters from src are added
     to dest. It works like strncat. */

    int i;
    int j;

    /* Loop to find the length of dest */
    for(i = 0; dest[i] != '\0'; i++){
    }

      /* Loop to add characters from src to the end of dest*/
    for( j = 0; j < n && src[j] != '\0'; j++, i++){
	dest[i] = src[j];
      }
    dest[i] = '\0';
    return dest;
}
