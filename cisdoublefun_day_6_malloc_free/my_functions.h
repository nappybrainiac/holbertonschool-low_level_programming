/* These prototypes are used for the files in this directory */
/* ============================================================= */

/* 0-string_dup.c */
/* Returns a pointer to copied text given as a parameter */
char *string_dup(char *str);

/* 1-all_in_one_args.c */
/* Concactenates all command line arguments */
char *all_in_one_args(int ac, char **av);

/* 2-print_array_of_strings.c */
/* Prints the contents of an array of strings */
void print_array_of_strings(char **a);

/* 3-string_to_words.c */
/* Turns a string into an array of words */
char **string_to_words(char *s);

/* print_char.c */
/* Prints only one character. Meant to be used instead of printf */
int print_char(char c);
