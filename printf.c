#include "main.h"
#include <stdio.h>

/**
 * _printf - Custom implementation of printf function
 * @format: Format string containing the characters and the specifiers
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
	{
		format++;
       		switch (*format)
        	{
                	case 'c':
                    	print_char(args, &count);
                    	break;
                	case 's':
                    	print_string(args, &count);
                    	break;
                	case '%':
                    	print_percent(&count);
                    	break;
                	case 'd':
                	case 'i':
                    	print_number(va_arg(args, int), &count);
                    	break;
                	case 'u':
                    	print_unsigned(va_arg(args, unsigned int), &count);
                    	break;
                	case 'x':
                	case 'X':
                    	print_hex(args, &count, *format);
                    	break;
                	default:
		    	format++;
                    	break;
            	}
        }
        else
        {
            write(1, format, 1);
            count++;
        }
        format++;
    }
    va_end(args);
    return count;
}

void print_char(va_list args, int *count)
{
    char c = va_arg(args, int);
    write(1, &c, 1);
    (*count)++;
}

void print_string(va_list args, int *count)
{
    char *str = va_arg(args, char *);
    if (str == NULL)
    {
	    write(1, "(null)", 6);
	    *count += 6;
    }
    else
    {
    	while (*str)
    	{
        	write(1, str++, 1);
        	(*count)++;
    	}
    }
}

void print_percent(int *count)
{
    write(1, "%", 1);
    (*count)++;
}

void print_number(int n, int *count)
{
    unsigned int num;

    if (n < 0)
    {
        write(1, "-", 1);
        (*count)++;
        num = -n;
    }
    else
    {
        num = n;
    }

    print_unsigned(num, count);
}

void print_unsigned(unsigned int num, int *count)
{
    char buffer[32];
    sprintf(buffer, "%u", num);
    for (size_t i = 0; buffer[i]!= '\0'; i++)
    {
	    write(1, &buffer[i], 1);
   	    (*count)++;
    }
}

void print_hex(va_list args, int *count, char specifier)
{
   unsigned int num = va_arg(args, unsigned int);
   char buffer[65];
   int base = (specifier == 'x' || specifier == 'X')? 16 : 8;

   sprintf(buffer, "%x", num);
   for (int i = 0; buffer[i]!= '\0'; i++)
   {
	   write(1, &buffer[i], 1);
	   (*count)++;
   }
}
