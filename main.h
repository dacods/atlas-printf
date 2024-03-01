#ifndef main_h
#define main_h

typedef struct
{
	char *op;

	int (*f)(va_list);
}convert;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(const char *, va_list args);
int printf_string(const char *, va_list args);
int printf_per(const char *, __attribute__((unused)) va_list args);

#endif
