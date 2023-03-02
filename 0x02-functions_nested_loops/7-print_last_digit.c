#include "main.h"
/**
 * print_last_digit - will print last digit of number
 * @m: the number
 *
 * Return: last digit
 */
int print_last_digit(int m)
{
	int r;

	r = m % 10;
	_putchar (r);
	return (r);
}
