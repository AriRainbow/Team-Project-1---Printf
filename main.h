#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* for variadic functions */
#include <unistd.h> /* write */

int _printf(const char *format, ...);

void print_char(va_list args, int *count);

void print_string(va_list args, int *count);

void print_percent(int *count);

void print_number(int n, int *count);

void print_unsigned(unsigned int n, int *count);

void print_hex(va_list args, int *count, char specifier);

#endif
