#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array containing the arguments passed to the program.
 *
 * Return: 0 if successful, 1 if there is an error.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
	int num = 0, j = 0;

	while (argv[i][j] != '\0')
	{
	if (argv[i][j] < '0' || argv[i][j] > '9')
	{
		printf("Error\n");
		return (1);
	}
	j++;
	}

	num = atoi(argv[i]);
	sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
