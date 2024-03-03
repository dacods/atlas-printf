#include "main.h"
#include <stdarg.h>

/**
 * _printf - Function that produces output according to a format
 * @format: a character string
 * Return: str
 */

int _printf(const char *format, ...)
{
	int str;

	va_list args;

	va_start(args, format);

	if (format == NULL)
		exit(98);

	str = 0;

	while (*format != '\0')
	{
		if (*format == '%' && get_func(1 + format) != NULL)
		{
			format++;
			if (*format == 's')
				str += printf_string(format, args);
			else if (*format == 'c')
				str += printf_char(format, args);
<<<<<<< HEAD
			else	
				str += printf_per(format, args);
=======
>>>>>>> 959bbf7f3a5464a47cf47f7207b11cd44816fe8f
		}
		else
		{
			_putchar(*format);
			str++;
		}

		format++;
	}
	va_end(args);
	return (str);
}
