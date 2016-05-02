char *string_nconcat(char *dest, const char *src, int n){
  int i = 0;
  int j = 0;

  while(dest[i] != '\0'){
    i++;
  }

  while(n > 0){
    dest[i + j] = src[j];
    j++;
    n--;
  }
  return dest;
}
