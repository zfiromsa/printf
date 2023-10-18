#include "main.h"

int _print_error(va_list ap)
{
    char *str;
    int i;

    (void)ap; 
    i = 0;
    str = "Error\n";
    while (str[i])
    {
        _putchar(str[i]);
        i++;
    }
    return i;
}
