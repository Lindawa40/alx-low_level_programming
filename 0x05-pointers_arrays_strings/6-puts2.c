#include "main.h"
#include <string.h>
/**
 * puts2 - prints characters of string
 *@str: other character
 *
 * Return: other character begin first character
 */
void puts2(char *str)
{
	int i;
	char *str;
	       	i= 0;

       while (i < strlen(str))
	      {
		putchar(str[i]);
	}
       i += 2;
}
