#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);

/**
 * struct datatype - struct datatype
 * @f: the function to be used
 */
typedef struct datatype
{
	void (*f)(va_list);
} datatype;

#endif
