#include <stdio.h>
/**
 * main - prints alphabet lower then uppercase
 *
 * Return: ALways 0(Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar (c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar (c);
	putchar ('\n');
	return (0);
}