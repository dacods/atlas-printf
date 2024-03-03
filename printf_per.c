#include "main.h"
#include <stdarg.h>

/**
 * printf_per - Function that prints the percent sign
 * @format: A string
 * @args: Arguments
 * Return: 1
 */

int printf_per(const char *format, __attribute__((unused)) va_list args)
{
	if (format != 0 && *format == '%')
	{
		_putchar(37);
		return (1);
	}
	else
		return (0);
}
