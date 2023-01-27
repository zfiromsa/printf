#include "main.h"

int print_cent(va_list args)
{
	unsigned char my_char;

	my_char = va_arg(args, int);
	_putchar(my_char);
	return (1);
}