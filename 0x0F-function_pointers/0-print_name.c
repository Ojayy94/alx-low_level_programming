#include "function_pointers.h"

/**
 * print_name - Function to print name from a pointer
 * @name: Pointer to char
 * @f: Function to function call
 * Return: Success
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
