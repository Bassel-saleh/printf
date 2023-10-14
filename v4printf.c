#include "main.h"
#include <stdarg.h>

/**
 */
void print_dec(va_list var)
{
	int num;

	num = va_arg(var, int);
	print_number(num);
}

/**
 */
int _printf(const char *format, ...)
{
	int i, count;
	va_list var;

	datatype type[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_dec},
		{'\0', 0}
	};
	va_start(var, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				i = 0;
				while (type[i].choice)
				{
					if (type[i].choice == *format)
					{
						type[i].f(var);
						count++;
						break;
					}
					i++;
				}
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
	format++;
	}
	va_end(var);
	return (count);
}
