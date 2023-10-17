#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	int count, (*operation)(va_list);

	va_start(ap, format);
	count = 0;
	while (format != '\0')
	{
		if (*format == '%')
		{
			format++;
			operation = get_op_func(format);
			count += operation(ap);
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(ap);
	return (count);
}

