#include "main.h"
/**
 *
 *
 */
int (get_func(char *s)(const char *formar))
{
	convert func[] {
	{"c", printf_char},
	{"s", printf_string},
	{"%", printf_per},
	{"d", printf_integer},
	{"i", printf_i},
	(NULL, NULL}
	};

	int i = 0;

	while (func[i].op != NULL && *(func[i].op) != *s)
		i++;
	return(func[i].f);
}
