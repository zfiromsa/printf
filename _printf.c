#include "printf.h"

int _printf(const char *format, ...)
{
	va_list ap;
	int count;

	va_start(ap, format);
	count = 0;
	while (*ap != '\0')
	{
		if (*ap == '%')
		{
			ap++;
			switch (*ap)
			{
				case 'd':
					//////////
					count++;
					break;
				case 'i':
					//////
					count++;
					break;
				case 'b':
                                        //////
                                        count++;
                                        break;
                                case 'u':
                                        //////
                                        count++;
                                        break;
                                case 'o':
                                        //////
                                        count++;
                                        break;
                                case 'x':
                                        //////
                                        count++;
                                        break;
                                case 'X':
                                        //////
                                        count++;
                                        break;
                                case 'S':
                                        //////
                                        count++;
                                        break;
                                case '%':
                                        _putchar('%');
                                        count++;
                                        break;
				default:
			}
		}
		else
		{
			/////

		}
		ap++;
	}
	va_end(ap);
	return (count);
}

