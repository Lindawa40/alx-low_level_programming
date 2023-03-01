#include "main.h"
/**
 * print_alphabet_x10 - prints 10x the alphabet
 *
 * Return: alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	for (c = 'a'; c <= 'z'; c++)
	{
		while (i <= 9)
		{
			_putchar('\n');

			i++;
		}
		_putchar(c);
	}
}
