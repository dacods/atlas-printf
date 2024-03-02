#include "main.h"
#include <stdarg.h>

/**
 * _printf - Function that produces output according to a format
 * @format: a character string
 * Return:
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
			format++;

		if (*format == 'd')
			str += printf_integers(va_arg(args, const char *))

				else if (*format == 's')
			str += printf_string(va_arg(args, const char *))

				else if (*format == 'i')
			str += printf_integers(va_arg(args, const char *))

				else if (*format == 'c')
			str += printf_char(va_arg(args, const char *))
		else
		{
			_putchar('%');
			_putchar(*format);
		}
		else
			_putchar(*format);

		format++;
	}
	va_end(args);
	return(str);
}
