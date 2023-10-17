#include "main.h"
/**
 * _printf - Custom printf function
 * @format: The format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list var;
	int count = 0;

	if (format)
	{
		va_start(var, format);
		count = _print_format(format, var);
		va_end(var);
	}
	return (count);
}

/**
 * _process_format - Process format specifiers
 * @format: The format string
 * @var: The va_list to access arguments
 * @count: Pointer to the character count
 * Return: NULL
 */
int _process_format(const char **format, va_list var, int *count)
{
	int i;

	datatype type[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
		{'u', print_uint},
		{'o', print_oct},
		{'x', print_hex},
		{'X', print_HEX},
		{'p', print_pointer},
		{'R', rot13},
		{'r', print_rev},
		{'%', print_percent},
		{0, 0},
		};
	for (i = 0; type[i].choice != '\0'; i++)
	{
		if (type[i].choice == **format)
		{
			*count += type[i].f(var);
			return (0);
		}
	}
	return (0);
}

/**
 * _print_format - Handle the format string and print characters
 * @format: The format string
 * @var: The va_list to access arguments
 * Return: Number of characters printed
 */
int _print_format(const char *format, va_list var)
{
	int count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				_putchar('%');
				return (-1);
			}
			_process_format(&format, var, &count);
		}
		else
		{
			count++;
			_putchar(*format);
		}
		format++;
	}
	return (count);
}

/**
 * print_percent - print percentage sympol (%)
 * @var: specifier list
 * Return: putchar
 */
int print_percent(va_list var)
{
	(void)va_arg(var, int);


	return (_putchar('%'));
}
