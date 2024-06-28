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

	/* code */

	va_end(args); /* clean up va_list */
	return (count);
}
