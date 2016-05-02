char *string_concat(char *dest, const char *src){
  int i = 0;
  int j = 0;

  while(dest[i] != '\0'){ /* To find the length of the first string */
    i++;
  }

  while(src[j] != '\0'){    /* Add the 2nd string to the end of the 1st */
    dest[i + j] = src[j];
    j++;
  }

  return dest;
}
