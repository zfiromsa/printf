#include "main.h"

/*
 * _printfint - it print int
 * @ap: argument;
 * Return: count;
 */
int _printint(va_list ap)
{
	int number,rvnumber, digit, count;

	count = 0;
	number = va_arg(ap, int);
	if (number < 0)
	{
		_putchar('-');
		count++;
		number = -number;
	}
	if (number == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		rvnumber = 0;
		while (number > 0)
		{
			digit = number % 10;
			rvnumber = rvnumber * 10 + digit;
			number /= 10;
			count++;
		}
		while (rvnumber > 0)
		{
			digit = rvnumber % 10;
			_putchar(digit + '0');
			rvnumber /= 10;
		}
	}
	return count;
}

