#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_strings- print a list of strings
* @n: number of strings
* @separator: is the string to be printed bt
* Return:0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    char *arg;
    va_list parameters;

    va_start(parameters, n);
    if (separator == NULL)
    {
        separator = "";
    }

    for (i = 0; i < n; i++)
    {
        arg = va_arg(parameters, char *);
        if (arg == NULL)
        {
            arg = "(nil)";
        }
        if (i != n - 1)
        {
            printf("%s%s", arg, separator);
        }
        else
        {
            printf("%s", arg);
        }
    }

    printf("\n");
    va_end(parameters);
}
