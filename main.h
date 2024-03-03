#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

int (*get_func(const char *s))(const char *, va_list args);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(const char *, va_list args);
int printf_string(const char *, va_list args);
int printf_per(const char *, __attribute__((unused)) va_list args);
int printf_integers(const char *, va_list args);

/**
 * struct conv - conversion
 * @op: op
 * @f: function
 * Return: 0
 */

typedef struct conv
{
	char *op;

	int (*f)(const char *, va_list);
} convert;

#endif
