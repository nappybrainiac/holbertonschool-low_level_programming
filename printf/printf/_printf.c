#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _printf - returns a string output to stdout
 * with the common directives (%s, %c, %i, etc)
 * accounted for.
 *
 * @format: refers to the string to output including
 * all directives pertaining to it.
 *
 * ...: refers to an unknown length of arguments.
 * to be replaced by the directives in format.
 *
 * Return: Returns the length (in bytes) of the string printed.
 */

int _printf(const char *format, ...)
{
	 const char *p;
	 int i, length, len_s;
	 char *s;
	 va_list ap;

	 va_start(ap, format);
	 p = format;
	 length = 0;

	for (p = format; *p != '\0'; p++)
	{
		if (!(*p))
			return (-1);

		if (*p != '%')
		{
			print_char(*p);
			length++;
			continue;

		}
		p++;
		switch (*p)
		{
			case 'c': /* a single character */
				i = va_arg(ap, int);
				print_char(i);
				length++;
				break;
			case 's': /* a string */
				s = va_arg(ap, char *);
				print_string(s);
				len_s = str_len(s);
				length += len_s;
				break;
			case '%':
				print_char('%');
				length++;
				break;
			case 'i':
				/* fallthrough */
			case 'd':
				i = va_arg(ap, int);
				print_number(i);
				length += 4;
				break;
		}
	}
	va_end(ap);
	return (length);
}
