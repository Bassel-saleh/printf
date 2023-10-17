#include "main.h"
/**
 * print_str - Print a string
 * @var: The va_list containing the string argument
 * Return: Number of characters printed
 */
int print_str(va_list var)
{
	char *str;
	int i, count = 0;
	char *nil = "(null)";

	str = va_arg(var, char *);
	if (str == 0)
	{
		for (i = 0; nil[i] != '\0'; i++)
			count += _putchar(nil[i]);
	}
	else
	{
		while (str && *str)
		{
			count += _putchar(*str);
			str++;
		}
	}
	return (count);
}
