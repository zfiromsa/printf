#include "main.h"

int print_cent(va_list args)
{
int i;
char *tmp, c;
int count = 0;
i = 0;
tmp = va_arg(args, char *);
if (tmp)
{
if ((tmp[0 + 1]) == '%')
{
c = tmp[0 + 1];
count = write(1, &c, 1);
i++;
}
return (count);
} 
return (0);
}
