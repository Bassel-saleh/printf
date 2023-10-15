#include "main.h"
/**
 * print_int - Handle %d and %i format specifiers
 * @var: va_list containing the integer argument
 * Return: Number of characters printed
 */
int print_int(va_list var)
{
	int num = va_arg(var, int);
	int count = 0;

	num < 0 ? (count += _putchar('-'), num = -num) : 0;
	count += print_dec(num);
	return (count);
}

/**
 * print_uint - Handle %u format specifier
 * @var: va_list containing the unsigned integer argument
 * Return: Number of characters printed
 */
int print_uint(va_list var)
{
	unsigned int num = va_arg(var, unsigned int);

	return (print_unsign(num));
}

/**
 * print_oct - Handle %o format specifier
 * @var: va_list containing the unsigned integer argument
 * Return: Number of characters printed
 */
int print_oct(va_list var)
{
	unsigned int num = va_arg(var, unsigned int);

	return (print_octal(num));
}

/**
 * print_hex - Handle %x format specifiers
 * @var: va_list containing the unsigned integer argument
 * Return: Number of characters printed
 */
int print_hex(va_list var)
{
	unsigned int num = va_arg(var, unsigned int);

	return (print_hexadecimal(num, 0));
}

/**
 * print_HEX - Handle %X format specifiers
 * @var: va_list containing the unsigned integer argument
 * Return: Number of characters printed
 */
int print_HEX(va_list var)
{
	unsigned int num = va_arg(var, unsigned int);

	return (print_hexadecimal(num, 1));
}
