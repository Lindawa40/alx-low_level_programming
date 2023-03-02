#include "main.h"
/**
 * times_table - print the 9 times table starting 0
 *
 * return: generated times table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		_putchar (i);
		for (j = 0; j <= 9; j++)
		{
			_putchar (i * j);
		}
		_putchar ('\n');
	}
}
