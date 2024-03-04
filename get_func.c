#include "main.h"
/**
 * get_func - gets the correct function for _printf.c
 * @s: string
 * Return: Correct function
 */
int (*get_func(const char *s))(const char *, va_list args)
{
	convert func[] = {
	{"c", printf_char},
	{"s", printf_string},
	{"%", printf_per},
	{"d", printf_integers},
	{"i", printf_integers},
	{NULL, NULL}
	};

	int i = 0;

	while (func[i].op != NULL && *(func[i].op) != *s)
		i++;
	return (func[i].f);
}
