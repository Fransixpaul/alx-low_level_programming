#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: command line arguments.
 * @argv: Program command line argument array
 * Return: (0) as Successful.
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
