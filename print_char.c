#include "main.h"
#include <stdarg.h>

void print_char(va_list var)
{
	int c;

	c = va_arg(var, int);
	_putchar(c);
}
