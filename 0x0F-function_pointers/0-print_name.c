#include "function_pointers.h"
/**
 * print_name - Prints the name of the person
 *
 * @name: person's name
 * @f: variable that holds the string name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
