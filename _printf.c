#include "main.h"

int _printf(const char *format, ...)
{
unsigned int i, count;
va_list args;
va_start(args, format);


i = 0;
count = 0;
/*print parsint a null pointer*/
if (format == NULL)
{
return (-1);
}
while (format[i])
{
while (format[i] != '%' && format[i])
{
_putchar(format[i]);
count++;
i++;
}
if (format[i] != '\0')
{
return (count);
}
f = check_specifier(&format[i + 1]);
if (f != NULL)
{
count += f(args);
i = i + 2;
continue;
}
if (format[i + 1])
{
return (-1);
}
if (format[i + 1] != '%')
{
i = i + 2;
}
else
{
i++;
}
}
va_end(args);
return (count);
}