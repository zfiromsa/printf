#include "main.h"

int print_str(va_list args)
{
int i;
char *tmp;
int count = 0;
tmp = va_arg(args, char *);

i = 0;
if (tmp)
{
while (tmp[0 + i])
{
count = write(1, &tmp, 1);
i++;
}
return (count);
} 
return (0);
}

