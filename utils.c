#include <unistd.h>
#include "main.h"

/** print_number - Prints integer
 * @n: Integer to print
 * @count: Pointer to char count
 */
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

	if (n / 10)
	{
		print_number(num / 10, count);
	}

	char digit = n % 10 + '0';
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
	if (n / 10)
	{
		print_unsigned(n / 10, count);
	}

	char digit = n % 10 + '0';
	write(1, &digit, 1);
	(*count)++;
}
