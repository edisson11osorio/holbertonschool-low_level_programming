#include "main.h"
/**
 *  times_table - print table 9
 */
void times_table(void)
{
int a, b, z;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
z = a * b;
if (b != 0)
{
_putchar(',');
_putchar(' ');
}
if (z >= 10)
{
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
else if
((z < 10) && (z != 0))
{
_putchar(' ');
_putchar((z % 10) + '0');
}
else
_putchar((z % 10) + '0');
}
}
