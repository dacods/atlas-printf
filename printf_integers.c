#include "main.h"
#include <stdarg.h>

/**
 * printf_integers - Function that prints a number
 * @format: A string
 * @args: Arguments
 * Return: len
 */

int printf_integers(const char *format, va_list args)
{
	int n, check, len;
	unsigned int num;

	n = va_arg(args, int);
	check = 1;
	len = 0;

	if (n < 0) /** Handles negatatives */
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / check > 9; ) /** calculates number of digits in the integer */
		check *= 10;

	for (; check != 0; ) /** prints each digit of the integer */
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}

	if (format != 0) /** if format is not 0, return len, otherwise return 0 */
	{
		return (len);
	}
	else
		return (0);
}
