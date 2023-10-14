#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;
	char c;
	const char *str;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			count++;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c': {
						  count += handle_char(args, &count);
						  break;
				}
				case 's': {
						  count += handle_string(args, &count);
						  break;
				}
				default:
					  putchar('%');
					  _putchar(*format);
					  count += 2;
					  break;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
