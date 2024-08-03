#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - Prints a char
 * @args: The argument list
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - Prints an integer
 * @args: The argument list
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - Prints a float
 * @args: The argument list
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - Prints a string
 * @args: The argument list
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s  == NULL)
	{
		printf("(nil)");
		return;
	}
		printf("%s", s);
}
/**
 * print_all - Prints anything based on the format string
 * @format: A string of characters representing the argument types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	void (*print_funcs[])(va_list) = {
		print_char,
		print_int,
		print_float,
		print_string
	};
	char formats[] = { 'c', 'i', 'f', 's' };

	va_start(args, format);
	while (format && format[i])

	{
		int j = 0;

		while (j < 4)
		{
			if (format[i] == formats[j])
			{
				printf("%s", separator);
				print_funcs[j](args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
