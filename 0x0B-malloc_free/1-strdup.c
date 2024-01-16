#include "main.h"
#include "stdlib.h"
/**
 * _strdup - return a pointer to a newly allocated
 * space in memory also duplicate the string it holds
 * to the new space
 *
 * @str: initial input string
 *
 * Return: pointer to the memory allocated
 * which is an array of characters
 */
char *_strdup(char *str)
{
	 size_t k, j;
	 char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}
	k = 0;
	while (str[k] != '\0')
	{
		k++;
	}
	strdout = (char *)malloc(sizeof(char) * (k + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}

	for (j = 0; j <= k; j++)
	{
		strdout[j] = str[j];
	}
	return (strdout);
}
