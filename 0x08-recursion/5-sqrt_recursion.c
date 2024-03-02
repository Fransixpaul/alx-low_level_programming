#include <stdio.h>
#include "main.h"
/**
 * make_function - support function that returns the
 * square root of nutural number
 * @number: input number
 * @root: iterator
 *
 * Return: square root of a natural number
 */
int make_function(int number, int root)
{
	if ((root * root) > number)
	{
		return (-1);
	}
	else if ((root * root) == number)
	{
		return (root);
	}
	else
	{
		return (make_function(number, root + 1));
	}
}

/**
 * _sqrt_recursion - finctions that returns
 * the natural square root of a number
 * @n: input number
 *
 * Return: Natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (make_function(n, 0));
	}
}
