#include <stdio.h>
/**
 * main - print alphabet in lower except e,q
 *
 * Return: Alays 0(Success)
 */
int main(void)
{
	char c, e, q;

	e = 'e';
	q = 'q';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != e && c != q)
			putchar (c);
	}
	putchar ('\n');
	return (0);
}
