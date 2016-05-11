# Specify the target file, flags, commands, and the install directory

CFLAGS = -Wall -pedantic -Werror -Wextra
SOURCE = 2-print_permissions.c print_char.c
OBJECTS = 2-print_permissions.o print_char.o
EXECFILE = 2-print_permissions

#default target
all: $(EXECFILE) clean

$(EXECFILE): $(OBJECTS)
	gcc $(CFLAGS) $(OBJECTS) -o $(EXECFILE)

2-print_permissions.o: 2-print_permissions.c
	gcc $(CFLAGS) -c 2-print_permissions.c

print_char.o: print_char.c
	gcc $(CFLAGS) -c	print_char.c

clean:
	rm -f $(OBJECTS)
