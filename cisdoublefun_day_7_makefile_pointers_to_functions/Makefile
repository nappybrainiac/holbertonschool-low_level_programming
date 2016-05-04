# Specify the target file, flags, commands, and the install directory

CFLAGS = -Wall -pedantic -Werror -Wextra
CCOM = gcc -c
SOURCE = print_char.c 4-positive_or_not.c 0-print_number.c 0-absolute.c 1-uppercase.c \
 				 0-lowercase.c 0-first_digit.c 1-swap_int.c 2-str_len.c 3-print_string.o \
				4-reverse_string.c 5-string_to_integer.c 2-print_array.c 4-strings_compare.c \
				0-uppercase_string.c 1-cap_string.c 1-power.c 2-square_root.c

OBJECTS = $(SOURCE:.c=.o) #To convert .c files to .o files

# Default target
all: libholbertonschool.a clean

# To create the file libholbertonschool.a
libholbertonschool.a: $(OBJECTS)
	ar -rc libholbertonschool.a $(OBJECTS)
	ranlib libholbertonschool.a

# Running compilation using holbertonschool.h as header
%.o : src/%.c inc/holbertonschool.h
	$(CCOM) $(CFLAGS) $< -o $@

# Clean up directory by deleting all .o files
.PHONY: clean
clean:
	rm -rf $(OBJECTS)

re: $(OBJECTS)
