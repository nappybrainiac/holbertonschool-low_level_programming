#include "my_functions.h"

int length(char *str){
  int l = 0;

  while(*(str + l) != '\0'){
    l++;
  }
  return l;
}

char *rev_string(char *str){
  char temp;              /* Holder for the swapping characters*/
  int s = 0;
  int e = 0;
  int loop;

  int len = length(str);    /* finding the length of the string
                               using length()*/
  e = len - 1;              /* because str + len gets to '\0' */

  loop = (len/2) -1;    /* number of times the loop has to run for a
                               string of 'len' characters.*/
  while(loop > 0){          /* In every case the loop is 1/2 of string */
    temp = *(str + s);      /* first xter to temp */
    *(str + s) = *(str + e);          /* end xter to first */
    *(str + e) = temp;      /* temp xter to end */
    s++;                    /* advance forward from beginning */
    e--;                    /* reverse from end of string */
    loop--;                 /* reduce loop. */
  }
  return str;
}
