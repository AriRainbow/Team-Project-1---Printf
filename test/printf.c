#include "main.h"
#include <stdarg.h>
#include <unistd.h> /* write func */

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed, excluding null byte
 */

int _printf(const char *format, ...)
{
	va_list args; /* va_list to hold variable arguments */
	int count = 0; /* counter for number characters printed */
	char *str_arg; /* string argument for %s specifier */
	char char_arg; /* character argument for %c specifier */
	int int_arg; /* int argument for %d and %i */
	unsigned int uint_arg; /* unsigned int argument %u */

	if (!format)
		return (-1); /* handle null str */

	/* initialize va_list with format argument */
	va_start(args, format);

	/* iterate over format string */
	while (*format)
	{
		if (*format == '%') /* looking for specifier */
		{
			format++; /* move to char after '%' */
			if (!*format)
				return (-1); /* handle single % */
			switch (*format) /* replaces if/else */
			{
				case 'c': /* handle char specifier */
					/* get char argument */
					char_arg = va_arg(args, int);
					/* print char argument */
					write(1, &char_arg, 1);
					count++; /* char printed */
					break;

				case 's': /* handle string specifier */
					/* get string argument */
					str_arg = va_arg(args, char *);
					if (!str_arg) /* handle null str */
						str_arg = "(null)";
					while (*str_arg) /* bc str */
					{
						write(1, str_arg, 1);
						str_arg++;
						count++;
					}
					break;

				case 'd': /* handle integer */
				case 'i': /* handle integer */
					int_arg = va_arg(args, int);
					print_number(int_arg, &count);
					break;

				case 'u': /* handle insigned int */
					uint_arg = va_arg(args, unsigned int);
					print_unsigned(uint_arg, &count);
					break;

				case '%': /* handle literal '%' char */
					write(STDOUT_FILENO, "%", 1);
					count++;
					break;

				default: /* for unknown specifier */
					write(1, "%", 1);
					write(1, format, 1); /* as is */
					count += 2;
					break;
			}
		}
		else
		{
			write(1, format, 1); /* regular char */
			count++;
		}
		format++; /* next char in format string */
	}

	va_end(args); /* clean up va_list */
	return (count);
}
