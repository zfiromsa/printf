#include "main.h"

int _printf(const char *format, ...)
{
int i, count, value;
va_list args;
va_start(args, format);


i = 0;
count = 0;
value = 0;
/*print parsint a null pointer*/
if (format == NULL)
{
return (-1);
}
while (format[i])
{
if (format[i] != '%')
{
value = write(1,&format[i], 1);
count = count + value;
i++;
continue;
}
if (format[i] == '%')
{
f = check_specifier(&format[i + 1]);
if (f != NULL)
{
value = f(args);
count = count + value;
i = i + 2;
continue;
}
if (format[i + 1] == '\0')
{
break;
}
if (format[i + 1] != '\0')
{
value = write(1,&format[i], 1);
count = count + value;
i++;
continue;
}
}
}
return (count);
}