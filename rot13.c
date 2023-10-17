#include "main.h"
/**
 * rot13 - replace some characters in a string to match ROT13
 * @var: is the string to be changed
 * Return: number of characters printed
 */
int rot13(va_list var)
{
	char *w = va_arg(var, char *);
	char rotspeak[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotcode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j, count = 0;

	for (i = 0; w[i] != '\0'; i++)
	{
		for (j = 0; rotspeak[j] != '\0'; j++)
		{
			if (w[i] == rotspeak[j])
			{
				_putchar(rotcode[j]);
				break;
			}
		}
		if (w[i] != rotspeak[j])
			_putchar(w[i]);
		count++;
	}
	return (count);
}
