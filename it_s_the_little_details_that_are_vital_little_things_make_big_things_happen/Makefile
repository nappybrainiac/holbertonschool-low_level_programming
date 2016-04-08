
# Specify the target file, flags, commands, and the install directory

INSTALLDIR  = ../it_s_the_little_details_that_are_vital_little_things_make_big_things_happen
CFLAGS = -Wall -pedantic -Werror -Wextra
CCOM = gcc -c
OBJECTS = 0-absolute.o 0-print_number.o 1-power.o 2-square_root.o 3-print_string.o 4-strings_compare.o \
	print_char.o 0-contact_strings.o 0-uppercase_string.o 1-swap_int.o 2-str_len.o 3-string_ncopy.o \
	5-reverse_array.o 0-first_digit.o 1-cap_string.o 1-uppercase.o 2-string_copy.o 4-positive_or_not.o \
	5-string_to_integer.o 0-lowercase.o 1-nconcat_strings.o 2-print_array.o 3-is_prime_number.o \
        4-reverse_string.o

# Default target
all: libholbertonschool.a clean

libholbertonschool.a: $(OBJECTS)
	ar -rc libholbertonschool.a $(OBJECTS)

# Indicate dependencies of .c files on .h files
0-absolute.o: src/0-absolute.c inc/my_functions.h
	gcc -c $(CFLAGS) src/0-absolute.c inc/my_functions.h
0-print_number.o: src/0-print_number.c inc/my_functions.h
	gcc -c $(CFLAGS) src/0-print_number.c inc/my_functions.h	
1-power.o: src/1-power.c inc/my_functions.h
	gcc -c $(CFLAGS) src/1-power.c inc/my_functions.h		
2-square_root.o: src/2-square_root.c inc/my_functions.h
	gcc -c $(CFLAGS) src/2-square_root.c inc/my_functions.h
3-print_string.o: src/3-print_string.c inc/my_functions.h
	gcc -c $(CFLAGS) src/3-print_string.c inc/my_functions.h
4-strings_compare.o: src/4-strings_compare.c inc/my_functions.h
	gcc -c $(CFLAGS) src/4-strings_compare.c inc/my_functions.h
print_char.o: src/print_char.c inc/my_functions.h
	gcc -c $(CFLAGS) src/print_char.c inc/my_functions.h
0-contact_strings.o: src/0-contact_strings.c inc/my_functions.h
	gcc -c $(CFLAGS) src/0-contact_strings.c inc/my_functions.h
0-uppercase_string.o: src/0-uppercase_string.c inc/my_functions.h
	gcc -c $(CFLAGS) src/0-uppercase_string.c inc/my_functions.h
1-swap_int.o: src/1-swap_int.c inc/my_functions.h
	gcc -c $(CFLAGS) src/1-swap_int.c inc/my_functions.h
2-str_len.o: src/2-str_len.c inc/my_functions.h
	gcc -c $(CFLAGS) src/2-str_len.c inc/my_functions.h
3-string_ncopy.o: src/3-string_ncopy.c inc/my_functions.h
	gcc -c $(CFLAGS) src/3-string_ncopy.c inc/my_functions.h
5-reverse_array.o: src/5-reverse_array.c inc/my_functions.h
	gcc -c $(CFLAGS) src/5-reverse_array.c inc/my_functions.h
0-first_digit.o: src/0-first_digit.c inc/my_functions.h
	gcc -c $(CFLAGS) src/0-first_digit.c inc/my_functions.h
1-cap_string.o: src/1-cap_string.c inc/my_functions.h
	gcc -c $(CFLAGS) src/1-cap_string.c inc/my_functions.h
1-uppercase.o: src/1-uppercase.c inc/my_functions.h
	gcc -c $(CFLAGS) src/1-uppercase.c inc/my_functions.h
2-string_copy.o: src/2-string_copy.c inc/my_functions.h
	gcc -c $(CFLAGS) src/2-string_copy.c inc/my_functions.h
4-positive_or_not.o: src/4-positive_or_not.c inc/my_functions.h
	gcc -c $(CFLAGS) src/4-positive_or_not.c inc/my_functions.h
5-string_to_integer.o: src/5-string_to_integer.c inc/my_functions.h
	gcc -c $(CFLAGS) src/5-string_to_integer.c inc/my_functions.h
0-lowercase.o: src/0-lowercase.c inc/my_functions.h
	gcc -c $(CFLAGS) src/0-lowercase.c inc/my_functions.h
1-nconcat_strings.o: src/1-nconcat_strings.c inc/my_functions.h
	gcc -c $(CFLAGS) src/1-nconcat_strings.c inc/my_functions.h
2-print_array.o: src/2-print_array.c inc/my_functions.h
	gcc -c $(CFLAGS) src/2-print_array.c inc/my_functions.h
3-is_prime_number.o: src/3-is_prime_number.c inc/my_functions.h
	gcc -c $(CFLAGS) src/3-is_prime_number.c inc/my_functions.h
4-reverse_string.o: src/4-reverse_string.c inc/my_functions.h
	gcc -c $(CFLAGS) src/4-reverse_string.c inc/my_functions.h

.PHONY: clean
clean:
	rm -rf $(OBJECTS)

re: $(OBJECTS)
