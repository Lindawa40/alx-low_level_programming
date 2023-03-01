#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: alphabet in lowercase
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);

		c++;
	}
}
