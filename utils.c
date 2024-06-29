#include <unistd.h>
#include "main.h"

void print_number(int n, int *count)
{
	char digit;

	if (n < 0)
	{
		write(1, "-", 1);
		(*count)++;
		n = -n;
	}

	if (n / 10)
		print_number(n / 10, count);
	digit = n % 10 + '0';
	write(1, &digit, 1);
	(*count)++;
}

void print_unsigned(unsigned int n, int *count)
{
	char digit;

	if (n / 10)
		print_unsigned(n / 10, count);
	digit = n % 10 + '0';
	write(1, &digit, 1);
	(*count)++;
}
