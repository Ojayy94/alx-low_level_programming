#include "main.h"

/**
* _puts2 - to print a string and a new line
* @str: Use case
* Return: Success
*/

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
