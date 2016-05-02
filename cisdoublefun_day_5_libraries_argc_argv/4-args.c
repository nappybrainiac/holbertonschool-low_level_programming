#include <unistd.h>

int print_char(char c){          /* The print_char function */
  return (write(1, &c, 1));
}

int main(int argc, char *argv[]){

  while(argc > 0){
    /* Since argv[] only goes up to the (argc -1)th item, and to reduce
       complication in reading the code, the variable j has been used. */
    int j = argc - 1;
    /* The variable i is being used to cycle through the individual letters
       of the words of the argument argv[j] */
    int i = 0;
    while(*(argv[j] + i) != '\0'){
      print_char(*(argv[j] + i));
      i++;
    }
    print_char('\n');
    argc--;
  }
  return 0;
}
