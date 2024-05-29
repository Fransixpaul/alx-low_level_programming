#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coin
 * and make a change for an amount
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) as successful
 */
int main(int argc, char **argv)
{
	int cents, coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		if (cents >= 10)
			cents -= 10;
		if (cents >= 5)
			cents -= 5;
		if (cents >= 2)
			cents -= 2;
		if (cents >= 1)
			cents -= 1;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
