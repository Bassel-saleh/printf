#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
void print_char(va_list var);
void print_str(va_list var);
void print_number(int n);
int _putchar(char c);

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
