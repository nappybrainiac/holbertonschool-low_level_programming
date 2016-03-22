/* This function encodes string using rot13. This means that
   it is shifted by a value of 13 (hint: ASCII table)*/

char *rot13(char *s) {
  int i;
  for (i = 0; *(s + i) != '\0'; i++) {
    if ((*(s + i) >= 'a' && *(s + i) <= 'm') || (*(s + i) >= 'A' && *(s + i) <= 'M')) {
      *(s + i) = (*(s + i) + 13);
    } else if ((*(s + i) >= 'n' && *(s + i) <= 'z') || (*(s + i) >= 'N' && *(s + i) <= 'Z')) {
      *(s + i) = (*(s + i) - 13);
    }
  }
  return (s);
}
