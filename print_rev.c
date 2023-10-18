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
	return (count);
}
