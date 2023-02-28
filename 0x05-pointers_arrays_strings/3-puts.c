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
 while(*str)
 {
	 putchar(*str);
	 str++;
 }
}
