#include "main.h"

int (*get_op_func(const char *c))(va_list ap)
{
    op_t ops[] = {
        {'c', &_putchar_},
        {'s', &_printstr},
        {'d', &_printdec},
        {'i', &_printint},
        {'u', &_printunsdec},
        {'o', &_printoct},
        {'x', &_prinhexdec},
        {'%', &_print_}
    };
    int i;

    i = 0;
    while (ops[i].op)
    {
        if ((ops[i].op) == *c && c[1] == '\0')
        {
            return (ops[i].f);
        }
        i++;
    }
    printf("Error\n");
    exit(99);
}