/*
 *     Filename:        2-print_string_struct.c
 *     Dependent files: print_char.c, 1-string_to_struct.c, 2-main.c
 *     Project Name:    Macros & Structures.
 *
 *     This file prints the contents of a struct String.
 *
 *     by Gloria Bwandungi, 2016.
 */
 #include "str_struct.h"
 #include "my_functions.h"


/* Prototypes of the functions used in print_string_struct */
/* ------------------------------------------------------- */
void print_number (int n);
void print_string(char *str);


/* This function uses a number of print functions to print
 * the str and length values of the struct String pointed to
 * by *str */
void print_string_struct(struct String *str){
  print_string(str->str);
  print_char(',');
  print_char(' ');
  print_number(str->length);
  print_char('\n');
}

/* This function prints a string that is given by *s */
void print_string(char *str){
  int i = 0;
  while(str[i] != '\0'){
    print_char(str[i]);
    i++;
  }
}

/* This function prints numbers and is used because
   the project does not allow the use of stdio.h and
   the print_char function must be used instead. */
void print_number (int n) {

  int numStore = n;
  int numPrint;
  int power = 10;

  if (n == 0) {             /* If the number is 0 print '0' */
    print_char('0');
  }
  if (n < 0) {
    print_char('-');       /* If the number is -ve print '-'*/
    n = n * -1;            /* Make the number +ve */
  }

  numStore = n;


  /*--------------------- The Loops -------------------*/


  /* This loop is to help find the first multiple of 10
     that n should be divided by in the final printing
     loop.*/


  while(numStore > 9) {
    numStore = numStore / 10;
    power = power * 10;
  }

  numStore = n;
  power = power / 10;

  /* The first loop will generate a multiple of 10 that is
      10 times greater than the actual value we need. So
      it has to be set.*/


  /* This loop is used to print out the characters in
     the number string, one by one, through a set of
     mathematical operations.*/

  while(numStore > 0) {

    numPrint = numStore / power;
    print_char(48 + numPrint);
    numStore = numStore % power;
    power = power / 10;
  }
}
