#include <stdio.h>
/**
 * main - print alphabet oper lower
 *
 * Return: 0
*/
int main(void)
{
int caracter = 97;
while (caracter <= 122)
{
if (caracter != 101 && caracter != 113)
putchar(caracter);
caracter++;
}
putchar('\n');
return (0);
}
