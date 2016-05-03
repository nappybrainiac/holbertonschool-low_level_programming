#include <stdlib.h>


int length(int ac, char **av); /* Length of string function */
char *string_concat(char *dest, const char *src); /* Concactenation function */

char *all_in_one_args(int ac, char **av){
  int i = 0;
  int len;
  char *new_memory;
  char new_line[] = {'\n', '\0'};

  len = length(ac, av) + ac + 1;

  /* Assign memory for s */
  new_memory = malloc((len * 4) * sizeof(char));
  /* If memory allocation fails return NULL*/
  if (new_memory == NULL){
       return NULL;
  }

  while(i < ac){
    string_concat(new_memory, av[i]);
    string_concat(new_memory, new_line);
    i++;
  }
  return new_memory;
}

/* Function to find the length of the entire string */
int length(int ac, char **av){
  int i = 0;
  int j;
  int total = 0;

  /* Find the length of the entire string */
  while(ac > 0){
    j = 0;
    while((av[i][j]) != '\0'){
      j++;
    }
    total += j;
    i++;
    ac--;
  }
   return total;
}

/* Function to concactenante the string*/
char *string_concat(char *dest, const char *src){
  int i = 0;
  int j = 0;

  while(dest[i] != '\0'){ /* To find the length of the first string */
    i++;
  }

  while(src[j] != '\0'){    /* Add the 2nd string to the end of the 1st */
    dest[i + j] = src[j];
    j++;
  }

  return dest;
}
