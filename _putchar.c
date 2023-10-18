#include "main.h"
/**
 * _putchar - print char
 * @c: the character to be printed
 * Return: the character
 */
int _putchar(char c)
{
	static int i;
	static char buff[buffsize];

	if (c == flush || i >= buffsize)
	{
		write(1, buff, i);
		i = 0;
	}
	if (c != flush)
	buff[i++] = c;
	return (1);
}
