#include <stdio.h>
/**
 * main - prints all received arguments
 * @argc: Argument count
 * @argv: Argument vector
 * Return: (0) as successful.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
