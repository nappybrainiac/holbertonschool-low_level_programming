/*
 *     Project:         File Descriptors & Permissions
 *     Filename:        2-print_permissions.c
 *     Dependent files: None
 *
 *     The functions in this file takes a file provided at
 *     the command line and prints its permissions.
 *
 *     by Gloria Bwandungi, 2016.
 */

 #include <unistd.h>
 #include <sys/stat.h>

 int print_char(char c);

 int main(int ac, char *av[]){
   /* create a structure of type struct stat to access file permissions */
   struct stat perm;

   if (ac != 2) { /* error if less than two arguments on command line */
   return(1);
   }

   if (lstat(av[1], &perm) == -1) {
     /* use lstat to return information about symbolic link and not the file it
        points to. */
     return(1);
   }
   /* the following print_char statements print the appropriate permissions
    * based on the selected file. Other than the first statement, the remaining
    * statements are in groups of three for User, Group, and Other permissions.
    */
   print_char((S_ISDIR(perm.st_mode)) ? 'd' : (S_ISLNK(perm.st_mode)) ? 'l' : '-');
   /* the first statement checks the file type, is it a directory, a symbolic
      link or a file? */
   print_char((perm.st_mode & S_IRUSR) ? 'r' : '-' );
   print_char((perm.st_mode & S_IWUSR) ? 'w' : '-' );
   print_char((perm.st_mode & S_IXUSR) ? 'x' : '-' );
   print_char((perm.st_mode & S_IRGRP) ? 'r' : '-' );
   print_char((perm.st_mode & S_IWGRP) ? 'w' : '-' );
   print_char((perm.st_mode & S_IXGRP) ? 'x' : '-' );
   print_char((perm.st_mode & S_IROTH) ? 'r' : '-' );
   print_char((perm.st_mode & S_IWOTH) ? 'w' : '-' );
   print_char((perm.st_mode & S_IXOTH) ? 'x' : '-' );
   print_char('\n'); /* return a new line to keep it neat. */
   return(0);
 }
