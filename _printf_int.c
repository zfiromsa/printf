#include "main.h"

int _printint(va_list ap)
{
    int i, j, n;
    char buffer[20];

    n = va_arg(ap, int);
    i = 0;
    if (n < 0)
    {
        _putchar('-');
        n = -n;
        i++;
    }
    if (n == 0)
    {
        _putchar('0');
        i++;
    }
    else
    {
        j = 0;
        while(n > 0)
        {
            buffer[j] = (n % 10) + '0';
            n = n / 10;
            i += j;
            j++;
        }
        while (j > 0)
        {
            j--;
            _putchar(buffer[j]);
        }
        
    }
    return j;
}