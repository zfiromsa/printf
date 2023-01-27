#include "main.h"

int print_str(va_list args)
{
char *my_string;
	int  i = 0;

	my_string = va_arg(args, char *);
	if (my_string == NULL)
		my_string = "(null)";
	while (my_string[i])
	{
		_putchar(my_string[i]);
		i++;
	}
	return (i);
}

