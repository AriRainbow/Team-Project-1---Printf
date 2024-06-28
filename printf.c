#include "main.h"
#include <stdarg.h>

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

	/* initialize va_list with format argument */
	va_start(args, format);

	/* iterate over format string */
	while (*format)
	{
		if (*format == '%') /* looking for specifier */
		{
			format++; /* move to char after '%' */
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
					while (*str_arg) /* bc str */
					{
						write(1, str_arg, 1);
						str_arg++;
						count++;
					}
					break;

				case '%': /* handle literal '%' char */
					write(1, "%", 1); /* print */
					count++;
					break;

				default: /* for unknown specifier */
					write(1, format, 1); /* as is */
					count++;
					break;
			}
		}


	va_end(args); /* clean up va_list */
	return (count);
}
