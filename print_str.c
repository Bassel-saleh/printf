#include "main.h"
#include <stdarg.h>
/**
 * print_str - Print a string
 * @var: The va_list containing the string argument
 * Return: Number of characters printed
 */
int print_str(va_list var)
{
	char *str;
	int count = 0;

	str = va_arg(var, char *);
	while (str && *str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}
