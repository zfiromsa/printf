#include "main.h"

int print_decm(va_list args)
{
unsigned int c = (unsigned int)va_arg(args, int);
int count = 0;
if (c)
{
	count = write(1, &c, 4);
	return (count);
}
return (0);
}
