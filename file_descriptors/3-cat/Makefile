# Specify the target file, flags, commands, and the install directory

CFLAGS = -Wall -pedantic -Werror -Wextra
SOURCE = 3-cat.c
OBJECTS = 3-cat.o
EXECFILE = 3-cat

#default target
all: $(EXECFILE) clean

$(EXECFILE): $(OBJECTS)
	gcc $(CFLAGS) $(OBJECTS) -o $(EXECFILE)

0-print_content.o: 3-cat.c
	gcc $(CFLAGS) -c 3-cat.c

clean:
	rm -f $(OBJECTS)
