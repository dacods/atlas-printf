#ifndef main_h
#define main_h

typedef struct
{
	char *symbol;

	int (*f)(va_list);
}convert;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
