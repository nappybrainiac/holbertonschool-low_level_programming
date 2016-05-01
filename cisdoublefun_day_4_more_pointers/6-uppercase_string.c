char *uppercase_string(char *str){
  int i = 0;

  while(str[i] != '\0'){
    if(str[i] >= 'a' && str[i] <= 'z'){
      str[i] -= 32;  /* On ASCII table A is 32 away from a */
    }
    i++;
  }
  return str;
}
