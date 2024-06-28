#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* for variadic functions */
#include "utils.h" /* utility functions */

/**
 * _printf - Custom printf function
 *
 * @format: Format string
 *
 * Return: Number of characters printed, excluding null byte
 */

int _printf(const char *format, ...);

#endif
