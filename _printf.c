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

	while (*format != '\0') /** Iterates through format string */
	{
		if (*format == '%' && get_func(1 + format) != NULL)
		{
			format++;
			if (*format == 'd' || *format == 'i') /** checks for format specifier */
				str += printf_integers(format, args);
			else if (*format == 's')
				str += printf_string(format, args);
			else if (*format == 'c')
				str += printf_char(format, args);
			else if (*format == '%')
				str += printf_per(format, args);
			else
				_putchar(*format);
		}
		else
		{
			_putchar(*format);
			str++;
		}

		format++;
	}
	va_end(args);
	return (str); /** returns number of characters printed  */
}
