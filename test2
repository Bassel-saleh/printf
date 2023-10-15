#include <stdio.h>
#include "main.h"

int main()
{
	int n = 42;
	char ch = 'A';
	char *str = "Hello, World!";
	float f = 3.1415926;
	unsigned int u = 12345;
	char *null_str;

	_printf("Custom printf: Integer n = %d, Character ch = %c, String str = %s\n", n, ch, str);
	_printf("Custom printf: Float f = %f, Unsigned u = %u\n", f, u);
	_printf("Custom printf: Hexadecimal n = %x, Octal u = %o\n", n, u);
	_printf("Custom printf: Pointer &n = %p\n", &n);
	_printf("Custom printf: Percentage symbol: %%\n");
	printf("Standard printf: Integer n = %d, Character ch = %c, String str = %s\n", n, ch, str);
	printf("Standard printf: Float f = %f, Unsigned u = %u\n", f, u);
	printf("Standard printf: Hexadecimal n = %x, Octal u = %o\n", n, u);
	printf("Standard printf: Pointer &n = %p\n", (void *)&n);
	printf("Standard printf: Percentage symbol: %%\n");
	null_str = NULL;
	_printf("Custom printf: Null string: %s\n", null_str);
	return 0;
}

