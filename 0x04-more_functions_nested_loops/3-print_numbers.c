#include <stdio.h>
#include "main.h"
/**
 * print_numbers - print the numbers from 0 to 9
 * new line
 */

void print_numbers(void)
{
    int n;
    for (n = 0; n < 10; n++)
    {
        _putchar(n);
        _putchar('\n');
    }
}
