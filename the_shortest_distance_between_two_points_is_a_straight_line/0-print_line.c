int print_char(char c);

/* This function draws a straight line on the terminal.*/
void print_line(int n) {
  int i;
  for (i = 0; i < n; i++) {
    print_char('_');
  }
  print_char('\n');
}
