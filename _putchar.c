#include "main.h"

/**
 * _putchar - writes the character c to stdout.
 * @c: the char to be print
 * Return: on success 1 or on error -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

