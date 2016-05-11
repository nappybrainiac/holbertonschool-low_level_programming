
# Specify the target file, flags, commands, and the install directory

CFLAGS = -Wall -pedantic -Werror -Wextra
SOURCE = 1-copy_content.c
OBJECTS = 1-copy_content.o
EXECFILE = 1-copy_content

#default target
all: $(EXECFILE) clean

$(EXECFILE): $(OBJECTS)
	gcc $(CFLAGS) $(OBJECTS) -o $(EXECFILE)

0-print_content.o: 1-copy_content.c
	gcc $(CFLAGS) -c 1-copy_content.c

clean:
	rm -f $(OBJECTS)
