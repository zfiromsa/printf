#include "main.h"

int (*check_specifier(const char *format))(va_list)
{
int i;
func_t my_array[5] ={
{"c", print_char},
{"s", print_str},
{"d", print_decm},
{"i", print_int},
{NULL, NULL},
};
for (i = 0; my_array[i].t != NULL; i++)
{
	if (*(my_array[i].t) == *format)
	{
		return (my_array[i].f);
	}
}
return (NULL);
}
