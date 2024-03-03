#include "main.h"
#include <stdarg.h>

/**
 * printf_char - Function that prints a character
 * @format: A string
 * @args: arguments
 * Return: 0
 */

int printf_char(const char *format, va_list args)
{
	char character = va_arg(args, int);

	if (format != 0)
	{
		_putchar(character);
		return (1);
	}
	else
		return (0);
}
