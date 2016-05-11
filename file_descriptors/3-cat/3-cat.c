/*
 *     Project:         File Descriptors & Permissions
 *     Filename:        3-cat.c
 *     Dependent files: None
 *
 *     The functions in this file mimic the cat command
 *     without handling any of the options with the exception
 *     of Ctrl-D.
 *
 *     by Gloria Bwandungi, 2016.
 */

 #include <fcntl.h>
 #include <unistd.h>
 #define BUFFER 1024


 int main(int argc, char *argv[]){

   int i;
   int rd;
   int fd;
   char buf[BUFFER];

   if(argc < 2){    /* Return 1 if there are no arguments */
     return 1;
   }

   i = 1;
   while(i < argc){                 /* To read all the files written
                                     * on the command line.
                                     */
     fd = open(argv[i], O_RDONLY);  /* Saves the file descriptor in
                                     * a variable (fd) that can now
                                     * be manipulated with other
                                     * commands.
                                     */
     if(fd < 0){
       return 1; /* Returns 1 to show that there was a problem
                  * opening the file.
                  */
     }

     while((rd = read(fd, buf, BUFFER)) > 0){ /* as long as fd has content
                                              * print it to the output
                                              * chosen.
                                              */
       if(rd < 0){     /* Returns 1 to show that there was a problem
                       * reading the file.
                       */
         return 1;
       }
       write(1, buf, rd);
     }
     close(fd);
     i++;
   }
 return 0;
 }
