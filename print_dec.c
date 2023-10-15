#include "main.h"
/**
  * print_number - print any number
  * @n: is the number to be printed
  * Return: 0
 **/
int print_number(int n)
{
	unsigned int x;
	int a = 0;

	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -n;
		a++;
	}
	if (x / 10 != 0)
	{
		a += print_number(x / 10);
	}
	_putchar((x % 10) + '0');
	a++;
	return (a);
}
