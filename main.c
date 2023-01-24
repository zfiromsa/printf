#include "main.h"

int main(void)
{
    int count_std = 0;
    int count_hdm = 0;

    write(1, "STANDARD:\n", 10);
    count_std = printf("my name starts with: %c\n", 'f');
    printf("i printed %d characters\n", count_std);
    write(1,"____________________\n",21);
    write(1,"home_made:\n",11);
    count_hdm = _printf("my name starts with: %c\n", 'F');
    printf("i printed %d charcters\n", count_hdm);

    return (0);
}