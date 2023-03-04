#include "main.h"
#include <string.h>
/**
 * leet - will be encoding a string into a number
 *@str: character
 *
 *Return: encoded string
 */
char *leet(char *str)
{
	char *result = str;
	char leetChars[] = {'4', '3', '0', '7', '1'};
	char originalChars[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int numChars = sizeof(originalChars) / sizeof(originalChars[0]);
	int i;
	char *p;

	for (i = 0; i < numChars; i++)
	{
		char originalChar = originalChars[i];
		char leetChar = leetChars[i % sizeof(leetChars)];

		for (p = str; *p != '\0'; p++)
		{
			if (*p == originalChar)
			{
				*p = leetChar;
			}
		}
	}
	return (result);
}
