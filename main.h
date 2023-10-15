#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
void print_dec(va_list var);
void print_char(va_list var);
void print_str(va_list var);
void print_number(int n);
int _putchar(char c);
int _print_format(const char *format, va_list var);
void _process_format(const char **format, va_list var, int *count);
int _strlen(char *s);

/**
 * struct datatype - struct datatype
 * @f: the function to be used
 */
typedef struct datatype
{
	char choice;
	void (*f)(va_list);
} datatype;

#endif
