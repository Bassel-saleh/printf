#include "main.h"
#include <stdarg.h>
/**
 */
int print_str(va_list var)
{
	char *str;
	int a = 0;
	
	str = va_arg(var, char *);
	if (str)
	{
		while (*str)
		{
			_putchar(*str);
			str++;
			a++;
		}
	}
	return (a);
}
