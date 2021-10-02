#include <stdio.h>
/**
 * main - print
 *
 * Return: 0
 */

int main(void)
{
int num = 0;
while (num <= 9)
{
putchar((num) + '0');
num++;
if (num == 10)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
