#include <stdio.h>
/**
 * main - print the lat digit
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
}
putchar('\n');
return (0);
}
