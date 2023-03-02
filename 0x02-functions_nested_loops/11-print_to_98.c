#include "main.h"
/**
 * print_to_98 - will print from n to 98
 * @n: a random natural number
 *
 * Return: natural numbers from n to 98
 */
void print_to_98(int n)
{
	while (n >= 98)
	{
		_putchar (n / 100 + '0');
		_putchar (n / 10 + '0');
		_putchar (n % 10 + '0');
		n--;
	}
	_putchar ('\n');
}
