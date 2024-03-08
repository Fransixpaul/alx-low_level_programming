#include <stdio.h>
/**
 * prime_func - function that calculate if it is a prime number
 * @x: input number
 * @y: divisor
 *
 * Return: 0
 */
int prime_func(int x, int y)
{
	if (x <= 1 || (x != y && x % y == 0))
	{
		return (0);
	}
	else if (x == y)
	{
		return (1);
	}
	else
	{
		return (prime_func(x, ++y));
	}
}
/**
 * is_prime_number - Function that returns a prime number
 *
 * @n: input number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (prime_func(n, 2));
}
