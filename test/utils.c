#include <unistd.h>
#include "main.h"

/** print_number - Prints integer
 * @n: Integer to print
 * @count: Pointer to char count
 */
void print_number(int n, int *count)
{
	unsigned int num;
	char digit;

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

	if (n / 10)
	{
		print_number(num / 10, count);
	}

	digit = num % 10 + '0';
	write(1, &digit, 1);
	(*count)++;
}

/**
 * print_unsigned - Prints unsigned integer
 * @n: Unsigned integer to print
 * @count: Pointer to char count
 */

void print_unsigned(unsigned int n, int *count)
{
	char digit;

	if (n / 10)
	{
		print_unsigned(n / 10, count);
	}

	digit = n % 10 + '0';
	write(1, &digit, 1);
	(*count)++;
}
