#include <stdio.h>
#include "main.h"
/*
 * void_puts - print a string
 * @str: string to be printed
 *
 * Return: nothing
 */
void _puts(char *str)
{
	char *str[] = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	putchar(*str);
}
