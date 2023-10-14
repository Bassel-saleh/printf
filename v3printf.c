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
	int i, j, count;
	va_list var;

	datatype type[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_dec},
		{'\0', 0}
	};
	va_start(var, format);
	j = 0;
	count = 0;
	while (format && format[j])
	{
		if (format[j] != '%')
		{
			_putchar(format[j]);
			count++;
		}
		else
		{
			j++;
			if (format[j] == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				i = 0;
				while (type[i].choice)
					{
						if (type[i].choice == format[j])
						{
							type[i].f(var);
							count++;
							break;
						}
						i++;
					}
			}
		}
		j++;
	}
	va_end(var);
	return (count);
}
