#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: int input
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}
