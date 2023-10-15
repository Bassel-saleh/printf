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
    
    if (num < 0)
    {
        _putchar('-');
        count++;
        num = -num;
    }

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

    return (print_unsigned(num));
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
 * print_hex - Handle %x and %X format specifiers
 * @var: va_list containing the unsigned integer argument
 * Return: Number of characters printed
 */
int print_hex(va_list var)
{
	unsigned int num = va_arg(var, unsigned int);

	return print_hexadecimal(num, 1);
}
