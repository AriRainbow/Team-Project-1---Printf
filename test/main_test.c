#include "../main.h"
#include <stdio.h>

int main(void)
{
	_printf("Characters: [%c]\n", "H");
	_printf("String: [%s]\n", "Hello, World!");
	_printf("Percent: [%%]\n");
	_printf("Integer: [%d]\n", 42);
	_printf("Negative integer: [%d]\n", -42);

	return (0);
}
