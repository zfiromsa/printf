#include "main.h"

int (*get_op_func(const char *c))(va_list ap)
{
    op_t ops[] = {
        {'c', &_putchar},
        {'s', &_printstr},
        {'d', &_printdec},
        {'i', &_printint},
        {'u', &_printunsdec},
        {'o', &_printoct},
        {'x', &_prinhexdec},
        {'%', &_print_},
        {NULL, NULL}
    };
    int i;

    i = 0;
    while (ops[i].op != NULL)
    {
        if (*(ops[i].op) == *c && c[1] == '\0')
        {
            return (ops[i].f);
        }
        i++;
    }
    printf("Error\n");
    exit(99);
}