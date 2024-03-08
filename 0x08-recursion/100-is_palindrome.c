#include "main.h"
/**
 * strlen_recursion - Function that gets the length of a string
 * @s: string
 * Return: Length of a string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlen_recursion(++s));
}
/**
 * compare_str - compare each cahracter of a string
 * @str: string
 * @left: Smallest iterator
 * @right: largets iterato
 * Return: int
 */
int compare_str(char *str, int left, int right)
{
	if (*(str + left) == *(str + right))
	{
		if ((left == right) || (left == right + 1))
			return (1);
	return (0 + compare_str(str, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - check if a string is palindrome
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_str(s, 0, strlen_recursion(s) - 1));
}
