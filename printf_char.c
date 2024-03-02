#include "main.h"
#include <stdarg.h>

/**
 * printf_char - Function that prints a character
 * @character: A character
 * Return: 0
 */

int printf_char(const char *format, va_list args)
{
	char character = va_arg(args, int);

	_putchar(character);
	
	return (1);
}
