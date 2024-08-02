#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format string.
 * @format: A string of characters representing the argument types.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char c;
    int d;
    float f;
    char *s;
    char separator = 0;

    va_start(args, format);

    while (format && format[i])
    {
        if (separator)
            printf(", ");

        switch (format[i])
        {
            case 'c':
                c = va_arg(args, int); /* `char` is promoted to `int` */
                printf("%c", c);
                separator = 1;
                break;
            case 'i':
                d = va_arg(args, int);
                printf("%d", d);
                separator = 1;
                break;
            case 'f':
                f = va_arg(args, double); /* `float` is promoted to `double` */
                printf("%f", f);
                separator = 1;
                break;
            case 's':
                s = va_arg(args, char *);
                if (s)
                {
                    printf("%s", s);
                }
                else
                {
                    printf("(nil)");
                }
                separator = 1;
                break;
            default:
                break;
        }
        i++;
    }

    va_end(args);
    printf("\n");
}
