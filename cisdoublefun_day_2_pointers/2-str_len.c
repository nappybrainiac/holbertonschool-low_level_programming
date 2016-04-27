int str_len(char *s){
  int i = 0;

  while(*s != '\0'){
    s += 1;                 /* Advances the pointer to the next character */
    i++;
  }
  return i;
}
