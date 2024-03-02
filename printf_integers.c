#include "main.h"
/**
 * printf_integers - fucntion that print integers
 * Return: len
 */
int printf_integers(const char *, va_list args)
{
	int n, check, len;
	unsigned int num;

	n = va_arg(args, int);
	check = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / check > 9; )
		check *= 10;

	for (; check != 0; )
	{
		len += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}

	return(len);
}
