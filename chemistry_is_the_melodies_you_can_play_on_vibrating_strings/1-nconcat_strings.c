#include "my_functions.h"

char *nconcat_strings(char *dest, const char *src, int n){

  /* This function takes two character arrays as parameters,
   and adds the characters of *src at the end of *dest, just
   like strcat would. */

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
