int length(char *str){
  int i = 0;

  while(str[i] != '\0'){
    i++;
  }
  return i;
}

char *rev_string(char *str){
  int start = 0;
  int end = 0;
  char temp;

  end = length(str) - 1;


  while(start < end){
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
  }
  return str;
}
