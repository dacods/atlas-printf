#include "main.h"
#include <stdarg.h>

/**
 * printf_string - Function that prints a string of characters
 * @args: Arguments
 * Return:
 */

int printf_string(const char *, va_list args)
{
	int i;
	const char string;

	string = va_arg(args, const char *);

	if (string == NULL)
		string = "(null)";

	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);

	return (i);
}
