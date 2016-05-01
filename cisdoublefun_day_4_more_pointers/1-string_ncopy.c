char *string_ncopy(char *dest, const char *src, int n){
  int i;
  i = 0;

  while((*(src + i) - 1) != '\0' && n > 0){

    dest[i] = src[i];   /* Replace each dest with src values */
    i++;
    n--;
  }
  return dest;
}
