#include "main.h"
/**
 * print_char - prints char
 * @var: specifier list
 * Return: i which is 1 if a char was printed
 */
int print_char(va_list var)
{
	int c;

	if (var == 0)
	{
		_putchar('%');
		_putchar('c');
		return (2);
	}
	c = va_arg(var, int);
	return (_putchar(c));
}
