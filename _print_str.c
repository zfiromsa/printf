#include "main.h"
/*
 * _printstr - print strings
 * @ap: argume
 * Return: count
 */
int _printstr(va_list ap)
{
	int count;
	char *str;
	str = va_arg(ap, char *);
	count = 0;
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}
	return count;
}

