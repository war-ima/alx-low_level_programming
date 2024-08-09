#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using pointer to function
 * @name: name to be printed
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
