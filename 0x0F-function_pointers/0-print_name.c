#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: pointer to a function to use to print name
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
