#include "main.h"
/**
 * factorial - find the factorial of a number
 *
 * @n: factor of factorial
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial (n - 1));
}
