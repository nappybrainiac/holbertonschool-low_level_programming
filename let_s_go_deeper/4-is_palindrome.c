/* To determine the length of the string */
int length(char *str, int i){

  if(*(str + i) == 0){
    return i;
  }
  return length(str, i + 1);
}

/* Are the characters the same at the end 
   and beginning? If so, check the next set
   of characters.
   This is the function where recursion occurs*/
int palindrome_or_nah(char *s, int length, int i)
{
  if(i >= length) return 1;
  if(s[i] != s[length - i - 1]){
    return 0;
  }
  return palindrome_or_nah(s, length, i + 1);
}  

/* Using outputs from the previous functions to
   check the input of values from 4-main.c*/
int is_palindrome(char *s)
{  
  int str_length;  
  str_length = length(s, 0);
  return palindrome_or_nah(s, str_length ,0);
}
