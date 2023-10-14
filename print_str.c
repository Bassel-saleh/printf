#include "main.h"
#include <stdarg.h>
/**
 */
void print_str(va_list var)
{
	char *str;
	
	str = va_arg(var, char *);
	if (str)
	{
		while (*str)
		{
			_putchar(*str);
			str++;
		}
	}
}
