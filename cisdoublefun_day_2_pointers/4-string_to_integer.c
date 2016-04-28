#include <limits.h>

/* This function determines the length of the number string */
int length_of_number(char *s){
    int adv = 0;
    int length = 0;
    while(*(s + adv) != '\0'){
        /* Are they numbers or nah? */
        if(*(s + adv) >= '0' && *(s + adv) <= '9'){
          length++;
          /* If there is a space after the number, exit the loop */
          if(*(s + (adv + 1)) > '9' || *(s + (adv + 1)) < '0'){
            break;
          }
        }
      adv++;
    }
    return length;
}
/* ---------- Fin. length_of_number function -------------- */

/* This function returns the power of 10 with which to multiply values */
int expo(int length){
  int expn = 1;

  while(length > 1){
    expn *= 10;
    length--;
  }
  return expn;
}
/* --------------- Fin. expo function ----------------- */

/* This function converts the strings to integers */
int string_to_integer(char *s){
  int expn;          /* The power of 10 with which to multiply values */
  int len_temp;      /* To temporarily store length value */
  int num_temp;      /* To temporarily store the number */
  int i = 0;         /* Counter integer for conversion loop */
  int j = 0;         /* Counter integer for the -vity loop */
  int neg = 1;       /* To capture the -vity or +vity */
  int total = 0;     /* Where the numbers get added to get the actual
                        numerical values*/

  len_temp = length_of_number(s);  /* Call to function for length */
  /* for ridiculously long numbers */
  if(len_temp > 10){
    return 0;
  }
  expn = expo(len_temp);           /* Call to function for exponent */

  /* Loop to determine +vity or -vity */
  while(*(s + j) != '\0'){
    if(*(s + j) == '-'){
      if(*(s + (j + 1)) > '9' || *(s + (j + 1)) < '0'){
        /* To stop the search for numbers in the string */
        break;
      }
      neg *= -1;
    }
    j++;
  }

  while(*(s + i) != '\0'){
    /* Assign the value of (s + i) to an int variable */
    num_temp = *(s + i) - 48;
    if(num_temp >=0 && num_temp <= 9){
      num_temp *= expn;          /* Multiply by expn so that if the number
                                    is 9 then it becomes 90 (for string '98')*/
      expn /= 10;                /* Divide the exponent by 10 so that the
                                    next number (8 in string '98) is
                                    only multiplied by 1 */
      /* To check if the number is going to be greater than an int
         can hold */
      if(total == 2147483640 && num_temp > 7 && neg == 1){
        return 0;
      }
      total += num_temp;         /* Add the value to total */

    }
    i++;                         /* Increase the counter */
  }

  total *= neg;                   /* To convert the number to -ve */
  return total;
}
/* ----------------------------------------------------------- */
