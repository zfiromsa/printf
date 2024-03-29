#include "main.h"

/**
 * _printf - it is simple printf function
 *
 * @format: it is the argumetent to be printed
 * Return: count.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int count, (*operation)(va_list);

	va_start(ap, format);
	count = 0;
	if (format != NULL)
	{
		while (*format)
		{
			if (*format == '%')
			{
				format++;
				if (*format == '\0')
					return (count);
				operation = get_op_func(format);
				if (operation != NULL)
					count += operation(ap);
				else
				{
					_putchar('%');
					_putchar(*format);
					count++;
				}
			}
			else
			{
				_putchar(*format);
				count++;
			}
			format++;
		}
	}
	va_end(ap);
	return (count);
}

