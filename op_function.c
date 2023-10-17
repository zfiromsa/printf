#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _printstr(va_list ap)
{
    int printed_chars;
    char ch, *str;

    str = va_arg(ap, char);
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
{}

int _printint(va_list ap)
{
    int n, printed_chars;

    n = va_arg(ap, int);
    printed_chars = 0;
    if (n < 0)
    {
        _putchar('-');
        printed_chars++;
        n *= -1;
    }

    if (n / 10 != 0)
        printed_chars += print_int(n / 10);

    _putchar('0' + n % 10);
    printed_chars++;
    return printed_chars;
}

int _printunsdec(va_list ap)
{}

int _printoct(va_list ap)
{}

int _prinhexdec(va_list ap)
{}

int _print_(char c)
{
    _putchar('%');
    return (1);
}