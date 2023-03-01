#include "main.h"
/**
 * print_alphabet_x10 - prints 10x the alphabet
 *
 * Return: alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);

			c++;
		}
		_putchar('\n');
	}
}
