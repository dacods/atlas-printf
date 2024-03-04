#include "main.h"
#include <stdarg.h>

/**
 * printf_string - Function that prints a string of characters
 * @format: A string
 * @args: Arguments
 * Return: i
 */

int printf_string(const char *format, va_list args)
{
	int i;
	const char *string;

	string = va_arg(args, const char *);

	if (string == NULL)
		string = "(null)";
	/** prints each character of the string until NULL terminator is reached */
	/** also check if format is not null to avoid unnecessary printing */
	for (i = 0; string[i] != '\0' && format != 0; i++)
		_putchar(string[i]);

	return (i);
}
