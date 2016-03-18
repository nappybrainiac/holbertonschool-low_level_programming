int print_char(char c);

/* this function draws a diagonal line on the terminal. */
void print_diagonal(int n) {
 
  int space;
  int line;

  /* statement to accommodate numbers less than 1 for n. */
  if (n < 1) {
    print_char('\n');
  }
  for (line = 0; line < n; line++) {

    /* for loop to print lines. */
    for (space = 0; space < line ; space++) {

      /* for loop to print spaces before \. */
      print_char(' ');
    }
    print_char('\\');
    print_char('\n');
  }
}
