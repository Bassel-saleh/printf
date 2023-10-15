#include "main.h"
/**
 */
int print_int(va_list var)
{
	int num = va_arg(var, int);
	int count = 0;
	int format = 10;

	if (num < 0)
	{
		format = 10;
	}
	else
	{
		if (num >= 256)
		{
			format = 16;
		}
		else if (num >= 8)
		{
			format = 8;
		}
	}
	if (format == 10)
	{
		count += print_number(num);
	}
	else if (format == 16)
	{
		count += print_hex(num);
	}
	else
	{
		count += print_oct(num);
	}
	return (count);
}

/**
 * print_hex - Print an unsigned integer in hexadecimal format
 * @n: The unsigned integer to be printed
 * Return: Number of characters printed
 */
int print_hex(unsigned int n)
{
	int count = 0;
	char hex_digits[] = "0123456789ABCDEF";
	char buffer[32];
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	while (n != 0)
	{
		buffer[i] = hex_digits[n % 16];
		n /= 16;
		i++;
	}
	for (i--; i >= 0; i--)
	{
		_putchar(buffer[i]);
		count++;
	}
	return (count);
}

/**
 * print_oct - Print an unsigned integer in octal format
 * @n: The unsigned integer to be printed
 * Return: Number of characters printed
 */
int print_oct(unsigned int n)
{
	int count = 0;
	char buffer[32];
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	while (n != 0)
	{
		buffer[i] = (n % 8) + '0';
		n /= 8;
		i++;
	}
	for (i--; i >= 0; i--)
	{
		_putchar(buffer[i]);
		count++;
	}
	return (count);
}
