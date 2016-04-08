

/* This function is to be included in 
   the my_functions library.

   It takes the value of the input character
   determines whether it is capital letter, 
   then converts it to a lowercase character.*/

char lowercase(char c)
{
  if(c >= 65 && c <= 90)   /* 65 & 90 are the ASCII values of A & Z respectively */
    {
      c = (c + 32);
    }
  return c;
}
