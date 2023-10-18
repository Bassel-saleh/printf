#include "main.h"
/**
 * print_dec - Print a decimal integer
 * @n: The integer to be printed
 * Return: Number of characters printed
 */
int print_dec(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		count++;
	}
	else
	{
		num = n;
	}
	if (num / 10 != 0)
	{
		count += print_dec(num / 10);
	}
	_putchar((num % 10) + '0');
	count++;
	return (count);
}

/**
 * print_hexadecimal - Print an unsigned integer in hexadecimal format
 * @n: The unsigned integer to be printed
 * @uppercase: whether to use uppercase or not
 * Return: Number of characters printed
 */
int print_hexadecimal(unsigned int n, int uppercase)
{
	int count = 0;
	char hex_digits[] = "0123456789abcdef";
	char buffer[32];
	int i;

	if (uppercase)
	{
		for (i = 0; i < 16; i++)
		{
			if (hex_digits[i] >= 'a' && hex_digits[i] <= 'f')
			{
				hex_digits[i] = hex_digits[i] - 'a' + 'A';
			}
		}
	}
	i = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
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
	}
	return (count);
}

/**
 * print_unsign - Print an unsigned integer
 * @n: The unsigned integer to be printed
 * Return: Number of characters printed
 */
int print_unsign(unsigned int n)
{
	int count = 0;

	if (n / 10 != 0)
	{
		count += print_unsign(n / 10);
	}
	_putchar((n % 10) + '0');
	count++;
	return (count);
}
