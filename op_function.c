#include "main.h"

int _printstr(va_list ap)
{
    int printed_chars;
    char ch, *str;

    str = va_arg(ap, char *);
    printed_chars = 0;
    if (str == NULL)
    {
        str = "(null)";
    }
    while (ch != '\0')
    {
        ch = *str;
        _putchar(ch);
        printed_chars++;
        str++;
    }

    return printed_chars;
}
int _printdec(va_list ap)
{
    (void)ap;
    return 0;
}



int _printunsdec(va_list ap)
{
    (void)ap;
    return 0;
}

int _printoct(va_list ap)
{
    (void)ap;
    return 0;
}

int _prinhexdec(va_list ap)
{
    (void)ap;
     return 0;
}

int _print_(va_list ap)
{
    (void)ap;
    _putchar('%');
    return (1);
}
/**
 * _putchar - writes the character c to stdout.
 * @c: the char to be print
 * Return: on success 1 or on error -1.
 */
int _putchar_(va_list ap)
{
    int i;
    char c;

    c = va_arg(ap, int);
    i = _putchar(c);
    return (i);
}

