int length (char *s);
int expo (int length); 
int negative (char *s);
int string_to_integer (char *s)
{
  int i;
  int number = 1;    
  int l;  
  int e; 
  int n; 
  int tmp = 0; 
  /*holds the length of the number*/
  l = length(s);
  if(l > 10)
    {
      return 0; 
    }
  /*Holds the power of the number*/
  e = expo(l);
  for (i = 0 ; s[i]; i++)
    {
      /*Converts the numbert to a digit*/
      number = (s[i] - 48);
      /*checks if the number is between the numeric values*/ 
      if (number >= 0 && number <= 9)
	{ 
	  /*Increases number by its power*/
	  number = number * e;
	  /*reduces the power by 10*/
	  e = e/10 ; 
	  /*Checks for numbers bigger that the INT_MAX*/
	  if (tmp == 2147483640 && number > 7 && negative(s) != -1)
	    {
	      return 0 ; 
	    }
	  number += tmp;
	  /*Temporary stores the value of the number so that it can change and latter by added to itself*/
	  tmp = number;
	  /*checks for space after each number*/
	  if (s[i +1] == ' ')
            {
	      n = negative (s);
	      number *= n;
              break;
	    }  
	}
    }
  n = negative (s); 
  number *= n;
  return  number; 
}

/*Checks for negatives*/
int negative (char *s)
{
  int i; 
  int negative  = 1; 
  for ( i = 0 ; s[i]; i++)
    {
      if (s[i] == '-')
        {
	  negative *= -1; 
        }

    }
  return negative; 
}

/*Calculates the exponent of the number*/

int expo(int length)
{
  int expo = 1; 
  while (length > 1) 
    {
      expo = expo * 10; 
      length--; 
      /*      printf("power ---> %d",expo); */
    }
  
  return expo; 
} 

/*Calcualtes the length of the number*/
int length(char *s)
{
  int l  = 0;
  int number;
  int i;   
  for ( i = 0 ; s[i] ; i++)
    {
      number = (s[i] - 48);

      if (number >= 0 && number <= 9)
        {
	  l++; 
	  /*checks for space after each number*/
	  if (s[i +1] == ' ')                                                                                                                        
	    {                                                                                                                                     
	      break;                                                                                                                                   
	    }
        }
    } 
  return l; 
}
