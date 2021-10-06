#include "main.h"
/**
 * print_sign - prints the sign
 * @n: charter checked
 * Return: 1 is greater, 0 and -1 is less
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(0);
return (0);
}
}
