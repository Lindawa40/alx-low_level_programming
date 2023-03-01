#include <stdio.h>
#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string to be reversed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
