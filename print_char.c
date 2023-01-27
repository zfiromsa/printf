#include "main.h"

int print_char(va_list args)
{
	unsigned char my_char;

	my_char = va_arg(args, int);
	_putchar(my_char);
	return (1);
}

int print_cent(void)
{
	_putchar('%');
	return (1);
}
