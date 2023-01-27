#include "main.h"

int print_str(va_list args)
{
int i;
char *tmp, c;
int count = 0;
i = 0;
tmp = va_arg(args, char *);
if (tmp)
{
while (tmp[0 + i])
{
c = tmp[0 + i];
count = write(1, &c, 1);
i++;
}
return (count);
} 
return (0);
}

