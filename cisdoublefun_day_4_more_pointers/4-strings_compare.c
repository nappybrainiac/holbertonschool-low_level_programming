
int strings_compare(char *s1, const char *s2){
  int i = 0;
  int j = 0;

  while(s1[i] != '\0'){ /* Find the length of the first string */
    i++;
  }
  while(s2[j] != '\0'){ /* Find the length of the second string */
    j++;
  }

  if(i > j){            /* Using the definition of what strcmp is ...*/
    return 15;
  }else if (i < j){
    return -15;
  }
  return 0;
}
