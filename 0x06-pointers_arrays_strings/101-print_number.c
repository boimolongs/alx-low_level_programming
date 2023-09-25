#include "main.h"

/**
 * print_interger - prints an integer;
 * @n: integer to be printed;
 */
void print_integer(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_integer(n1 / 10);

	_putchar((n1 % 10) + '0');
}
