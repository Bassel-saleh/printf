#include "main.h"
#include <stdarg.h>
/**
 * print_char - prints char
 * @var: specifier list
 * Return: i which is 1 if a char was printed
 */
int print_char(va_list var)
{
	int c;

	c = va_arg(var, int);
	/*if (c != 0)*/
	_putchar(c);
	return (1);
}
