#include <stdio.h>
#include "main.h"

int main()
{
	char ch = 'A';
	char *str = "Hello, World!";
	int printed = _printf("Character: %c\nString:%s\n", ch, str);
	int printed2 = printf("Character: %c\nString:%s\n", ch, str);

	_printf("\nNumber of characters printed: %d %%\n", printed);
	printf("\nNumber of characters printed: %d %%\n", printed2);

	return 0;
}
