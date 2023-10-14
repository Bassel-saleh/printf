#include <stdio.h>
#include "main.h"

int main()
{
	char ch = 'A';
	char *str = "Hello, World!";
	int printed = _printf("Character: %c\nString: %s\n", ch, str);

	_printf("\nNumber of characters printed: %d %%\n", printed);

	return 0;
}
