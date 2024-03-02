#include "main.h"
#include <stdarg.h>

/**
 * printf_per - Function that prints the percent sign
 * @args: Arguments
 * Return: 1
 */

int printf_per(const char *, __attribute__((unused)) va_list args)
{
	_putchar('%');

	return (1);
}
