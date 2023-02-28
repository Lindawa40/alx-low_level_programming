#include <stdio.h>

int string_length(char* str)
{
	int length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return length;
}

int main()
{
	char* str = "Hello, World!";
	int length = string_length(str);
	printf("Length of string \"%s\" is %d.\n", str, length);
	return 0;
}
