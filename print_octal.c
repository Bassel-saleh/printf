#include "main.h"
/**
 * print_octal - Print an unsigned integer in octal format without leading 0
 * @n: The unsigned integer to be printed
 * Return: Number of characters printed
 */
int print_octal(unsigned int n)
{
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count += print_octal_helper(n);
	}
	return (count);
}

/**
 */
int print_octal_helper(unsigned int n)
{
	int count = 0;

	if (n / 8 != 0)
	{
		count += print_octal_helper(n / 8);
	}
	_putchar((n % 8) + '0');
	count++;
	return (count);
}
