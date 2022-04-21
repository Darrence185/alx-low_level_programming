#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - print name using function pointer as argument
 *@name: string value
 *@f: function pointer
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}