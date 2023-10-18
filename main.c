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

    _printf("12Let's try to printf a simple sentence.\n");
    printf("Let's try to printf a simple sentence.\n");
    len2 = 0;
    len = 0;
     printf("Length:[%i, %i]\n", len2, len);
    _printf("12Length:[%i, %i]\n", len2, len);
   
    _printf("12Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("12Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("12String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
   _printf(NULL); 
    printf(NULL);
    _printf("%");
    printf("%\n");
    _printf("%K\n");
    printf("%K\n");
    _printf("%c\n", 'S');
    printf("%c\n", 'S');
    return (0);
}