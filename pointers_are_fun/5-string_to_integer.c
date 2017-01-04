/*
By Gloria Mugarura, Pointers are fun project.

Task 5.

  This function returns the first number contained in
  a string.
    * The number in the string can be preceded by
      an infinite number of characters.
    * All the + and - signs need to be accounted for
      odd number of -'s gives a -ve number.
    * Numbers greater than INT_MAX or less than
      INT_MIN must return a zero.
    * If there are no numbers it must return a zero.
    
*/


/* This function returns the length
   of a string */
   int str_len(char *s){

     int len = 0;

     while (*(s + len) != 0){   /*All strings in C end with '0' so we use it */
       len ++;                  /*to detect the end of the string.*/
     }
     return len;
   }

/* This function counts the number
   of "-" in the string and returns
   -1 for odd values and 1 for even
   values */
int negation(char *s)
{
  int i = 0;
  int j = str_len(s);
  int neg = 1;


  for(i = 0; i < j; i++){

    if(*(s + i) == 45){
      neg *= -1;
    }
    if(*(s + i + 1) > 47 && *(s + i + 1) < 58)
    {
      break;
    }

  }
  return neg;
}

/* This function takes a number as a string
   and converts it to an integer */
int string_to_integer(char *s)
{
  int length = str_len(s);
  int neg = negation(s);
  int i = 0;
  int num = 0;
  int flag = 0;

  while(i < length){
    /* if the char is a number */
    if(*(s + i) > 47 && *(s + i) < 58)
    {
      /* converts char to number */
      num = num * 10 + (*(s + i) - 48);

      if(num < 0) /* Up to this point all should be +ve */
      {
        flag = 1;
      }
      if(*(s + i + 1) < 48 || *(s + i + 1) > 57)
      {
        break;
      }
    }
    i++;
  }

  /* Error checking */
  if(neg == -1 && num == -2147483648)
  {
    return num;
  } else if(flag == 1)
  {
    return 0;
  } else
  {
    num = num * neg;
  }
  return num;
}
