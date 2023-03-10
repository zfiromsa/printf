#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct func
{
char *t;
int (*f)(va_list);
}func_t;

int (*f)(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
int (*check_specifier(const char *format))(va_list);
int print_char(va_list args);
int print_str(va_list args);
int print_decm(va_list args);
int print_int(va_list args);

#endif

