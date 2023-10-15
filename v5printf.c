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
 * _handle_percent - Handle the '%' character
 * @format: The format string
 * @var: The va_list to access arguments
 * @count: Pointer to the character count
 */
void _handle_percent(const char **format, va_list var, int *count)
{
	(*format)++;
	if (**format == '%')
	{
		*count ++;
		_putchar('%');
	}
	else
		_process_format(format, var, count);
}

/**
 * _process_format - Process format specifiers
 * @format: The format string
 * @var: The va_list to access arguments
 * Return: Number of characters printed
 */
void _process_format(const char **format, va_list var, int *count)
{
	int i;

	datatype type[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_dec},
		{'\0', 0}
	};
	i = 0;
	while (type[i].choice)
	{
		if (type[i].choice == **format)
		{
			type[i].f(var);
			(*count)++;
			return;
		}
		i++;
	}
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
			_handle_percent(&format, var, &count);
		else
		{
			count ++;
			_putchar(*format);
		}
		format++;
	}
	return (count);
}
