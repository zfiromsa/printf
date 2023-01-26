#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct func
{
char *t;
int (*f)(va_list);
}func_t;

int (*f)(va_list);
int _printf(const char *format, ...);
int (*check_specifier(const char *format))(va_list);
int print_char(va_list args);
int print_cent(va_list args);
int print_str(va_list args);

#endif

