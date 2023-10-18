#include "main.h"
/**
 * print_rev - print a string reversly
 * @var: specifier list
 * Return: count number of characters printed
 */
int print_rev(va_list var)
{
	char *s = va_arg(var, char *);
	int i, count;

	if (var == 0)
	{
		i = 0;
		while (s[i])
		{
			i++;
		}
		while (i--)
		{
			_putchar(s[i]);
			count++;
		}
	}
	else
	{
		_putchar('%');
		_putchar('r');
		return (2);
	}
	return (count);
}
