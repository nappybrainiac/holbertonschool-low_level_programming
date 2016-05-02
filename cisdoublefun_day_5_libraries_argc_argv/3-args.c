#include <unistd.h>

int print_char(char c){          /* The print_char function */
  return (write(1, &c, 1));
}

int main(int argc, char *argv[]){
  int i = 0;

  while(argc > 0){
    /* This variable is to allow us to cycle through the letters of the
       ith argument */
    int l = 0;
    /* *(argv[i]) is the pointer to the first character of the ith
       argument. */
    while(*(argv[i]+l) != '\0'){
      print_char(*(argv[i] + l));
      l++;
    }
    print_char('\n');
    i++;
    argc--;
  }
  return 0;
}
