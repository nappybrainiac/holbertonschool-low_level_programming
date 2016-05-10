/*
 *     Project:         File Descriptors & Permissions
 *     Filename:        0-print_content.c
 *     Dependent files: print_char.c
 *
 *     The functions in this file takes a file provided at
 *     the command line and prints it to the standard output.
 *
 *     by Gloria Bwandungi, 2016.
 */


#include <fcntl.h>
#include <unistd.h>
#define BUFSIZ 1024

int main(int argc, char *argv[]){
  int i;
  int fd;
  char buf[BUFSIZ];

  if(argc < 2){    /* Return 1 if there are no arguments */
    return 1;
  }

  fd = open(argv[1], O_RDONLY);  /* saves the file descriptor in
                                  * a variable (fd) that can now
                                  * be manipulated with other
                                  * commands
                                  */

  while((i = read(fd, buf, BUFSIZ)) > 0){ /* as long as fd has content
                                           * print it to the output
                                           * chosen.
                                           */
    write(1, buf, i);
  }

close(fd);    /* Close the file that had been opened in line 26 */
return 0;
}
