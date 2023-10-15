#include "main.h"
/**
 * print_pointer - Handle %p format specifier
 * @var: va_list containing the pointer argument
 * Return: Number of characters printed
 */
int print_pointer(va_list var)
{
	void *ptr = va_arg(var, void *);
	int width, count = 0;
	unsigned long ptr_value = (unsigned long)ptr;

	_putchar('0');
	_putchar('x');
	count += 2;
	width = 0;
	while (ptr_value > 0)
	{
		ptr_value /= 16;
		width++;
	}
	count += print_hexadecimal_padded((unsigned long)ptr, width);
	return count;
}

/**
 * print_hexadecimal_padded - Print an unsigned integer in hexadecimal format with padding
 * @n: The unsigned integer to be printed
 * @width: Minimum width of the output
 * Return: Number of characters printed
 */
int print_hexadecimal_padded(unsigned long n, int width)
{
    int count = 0;
    char hex_digits[] = "0123456789abcdef";
    char buffer[32];
    int zerostoadd, j, i = 0;

	if (n == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (n != 0)
			{
			buffer[i++] = hex_digits[n % 16];
			n /= 16;
			}
	}
	if (i < width)
	{
		zerostoadd = width - i;
		for (j = 0; j < zerostoadd; j++)
		{
			_putchar('0');
			count++;
		}
	}
	for (i--; i >= 0; i--)
	{
		_putchar(buffer[i]);
		count++;
	}
	return (count);
}
