#include "main.h"
/**
 * print_to_98 - will print from n to 98
 * @n: a random natural number
 *
 * Return: natural numbers from n to 98
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		for (; n >= 98; n--)
		{
			_putchar(n);
		}
		_putchar (n);
		n++;
	}
}
