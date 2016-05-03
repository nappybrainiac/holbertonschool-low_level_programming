#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void print_string(char *str); /* Prints a string */
int print_char(char c);       /* Prints one character */

void print_array_of_strings(char **a){
  int i = 0;


  /* Find the number of elements in the array */

  while(a[i] != '\0'){
    print_string(a[i]);
    print_char(' ');
    i++;
  }
  print_char('\n');
}

/* This function prints a string */
void print_string(char *str){

  while(*str != '\0'){
    print_char(*str);
    str += 1;
  }
}

/* This function prints one character at a time */
int print_char(char c){
          return (write(1, &c, 1));
        }
