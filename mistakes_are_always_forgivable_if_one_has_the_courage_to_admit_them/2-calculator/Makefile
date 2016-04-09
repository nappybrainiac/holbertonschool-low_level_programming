# This makefile compiles the files necessary to 
# to calculate mathematical operation between 
# two numbers, specified on the command line.

CFLAGS = -Wall -pedantic -Werror -Wextra 
CFILES = main.c op_functions.c get_op_func.c

all: $(CFILES)
	gcc $(CFLAGS) $(CFILES) -o 2-calculator

clean:
	rm -r *.o
