#include "main.h"
/**
 * print_rev - print a string reversly
 * @s: is the string to be printed
 * Return: no return
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
