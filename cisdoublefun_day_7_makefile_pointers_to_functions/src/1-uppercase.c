#include "../inc/my_functions.h"

/* This function has been created to be included in
   the library ../inc/my_functions.h.

   It takes a lowercase character a-z then prints
   the uppercase equivalent, by using ASCII values
   of the characters to print them.
*/


char uppercase(char c)
{
  if(c >= 97 && c <= 122)   /* 97 & 122 are the ASCII values of a & z respectively */ 
    {
      c = (c - 32);
    }  
  return c;
}
