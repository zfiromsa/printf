#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    _printf("111Let's try to printf a simple sentence.\n");
    printf("222Let's try to printf a simple sentence.\n");
    len2 = 22;
    len = 11;
     printf("Length:[%i, %i]\n", len2, len2);
    _printf("Length:[%i, %i]\n", len, len);
   
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    return (0);
}