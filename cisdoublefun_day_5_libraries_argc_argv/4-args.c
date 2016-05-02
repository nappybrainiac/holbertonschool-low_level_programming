#include <unistd.h>
#include <stdio.h>

int print_char(char c){          /* The print_char function */
  return (write(1, &c, 1));
}

int main(int argc, char *argv[]){



  while(argc > 0){
    int j = argc - 1;
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
