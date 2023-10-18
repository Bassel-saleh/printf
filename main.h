#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

#define buffsize 1024
#define flush -1

#define null_s "(null)"

/**
 * struct datatype - struct datatype
 * @choice: datatype choice
 * @f: the function to be used
 */
typedef struct datatype
{
	char choice;
	int (*f)(va_list);
} datatype;

int handle_specifier(const char **format, va_list var, int *count);
int rot13(va_list var);
int _printf(const char *format, ...);
int print_char(va_list var);
int print_str(va_list var);
int _putchar(char c);
int print_format(const char *format, va_list var);
int process_format(const char **format, va_list var, int *count);
int print_int(va_list var);
int print_uint(va_list var);
int print_oct(va_list var);
int print_hex(va_list var);
int print_dec(int n);
int print_octal(unsigned int n);
int print_hexadecimal(unsigned int n, int uppercase);
int print_octal_helper(unsigned int n);
int print_unsign(unsigned int n);
int print_HEX(va_list var);
int print_pointer(va_list var);
int print_hexadecimal_padded(unsigned long n, int width);
int print_rev(va_list var);
int print_percent(va_list var);

#endif
