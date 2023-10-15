#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(va_list var);
int print_str(va_list var);
int _putchar(char c);
int _print_format(const char *format, va_list var);
void _process_format(const char **format, va_list var, int *count);
int print_int(va_list var);
int print_uint(va_list var);
int print_oct(va_list var);
int print_hex(va_list var);
int print_dec(int n);
int print_octal(unsigned int n);
int print_hexadecimal(unsigned int n, int uppercase);
int print_octal_helper(unsigned int n);
int print_unsigned(unsigned int n);

/**
 * struct datatype - struct datatype
 * @f: the function to be used
 */
typedef struct datatype
{
	char choice;
	int (*f)(va_list);
} datatype;

#endif
