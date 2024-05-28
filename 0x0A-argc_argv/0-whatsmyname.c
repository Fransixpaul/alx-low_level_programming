#include <stdio.h>
/**
 * main - prints its name followed by a new line
 * @argc: command line
 * @argv: command line array to arg
 *
 * Return: Zero when successful
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
