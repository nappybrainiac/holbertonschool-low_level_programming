/*
 *     Project:         File Descriptors & Permissions
 *     Filename:        1-copy_content.c
 *     Dependent files: lorem_ipsum
 *
 *     The functions in this file takes a file provided at
 *     the command line and copies it to given output file.
 *
 *     by Gloria Bwandungi, 2016.
 */

 #include <fcntl.h>
 #include <unistd.h>

 #define BUFFER 1024 /* Setting the buffer size */
 #define PERMS 0644 /* (User) 6 - rw, (Group) 4 - r, (Others) 4 - r */

 int main(int argc, char *argv[]){
   int rd;
   int fd;
   char buf[BUFFER];
   int cp;

   if(argc != 3)    /* This function requires 3 arguments. */
     return 1;

   fd =  open(argv[1], O_RDONLY); /* The second argument is the file to be
                                 * copied. So it needs to be opened.
                                 */
   if(fd < 0) /* If the file cannot be opened, return 1. */
     return 1;

   rd = read(fd, buf, BUFFER);
   close(fd);

   cp = open(argv[2], O_RDWR | O_CREAT, PERMS); /* Here we set the destination
                                              * and permissions of the file.
                                              */
   if(cp < 0) /* If the file cannot be opened, return 1. */
     return 1;

   if(write(cp, buf, rd) != rd)   /* The contents of the buffer array buf[]
                                   * are written to the newly created file.
                                   */
      return 1;
   close(cp);
   return 0;
 }
