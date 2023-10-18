#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char op;
    int (*f)(va_list);
} op_t;

int (*get_op_func(const char *c))(va_list ap);
int _printf(const char *format, ...);
int _putchar(char c);
int _putchar_(va_list ap);
int _printstr(va_list ap);
int _printdec(va_list ap);
int _printint(va_list ap);
int _printunsdec(va_list ap);
int _printoct(va_list ap);
int _prinhexdec(va_list ap);
int _print_(va_list ap);
int _print_error(va_list ap);

#endif

