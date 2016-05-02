#include <stdlib.h>

char *string_dup(char *str){
  int i = 0;
  int j = 0;
  char *s;

  /* Find the length of the string */
  while(*(str + i) !='\0'){
    i++;
  }

  s = malloc((i + 1) * sizeof(char));
  if(s == NULL){
    return NULL;
  }
  /* Assigns the values of str => s */
  while(i > 0){
    s[j] = str[j];
    j++;
    i--;
  }
  return s;
}
