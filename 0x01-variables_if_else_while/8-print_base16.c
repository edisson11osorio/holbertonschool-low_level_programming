#include <stdio.h>
/**
 * main - print
 *
 * Return: 0,
*/
int main(void)
{
int num = 0;
char letter = 97;
while (num <= 9)
{
putchar((num) + '0');
num++;
}
while (letter <= 102)
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
