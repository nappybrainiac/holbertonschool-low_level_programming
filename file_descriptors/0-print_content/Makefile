# Specify the target file, flags, commands, and the install directory

CFLAGS = -Wall -pedantic -Werror -Wextra
SOURCE = 0-print_content.c
OBJECTS = 0-print_content.o
EXECFILE = 0-print_content

#default target
all: $(EXECFILE) clean

$(EXECFILE): $(OBJECTS)
	gcc $(CFLAGS) $(OBJECTS) -o $(EXECFILE)

0-print_content.o: 0-print_content.c
	gcc $(CFLAGS) -c 0-print_content.c

clean:
	rm -f $(OBJECTS)
