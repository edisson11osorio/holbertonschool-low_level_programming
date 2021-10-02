#include <stdio.h>
/**
 * main - print alphabet
 *
 * Return: 0
*/
int main(void)
{
int caracter = 97;
int caracterM = 65;
while (caracter <= 122)
{
putchar(caracter);
caracter++;
}
while (caracterM <= 90)
{
putchar(caracterM);
caracterM++;
}
putchar('\n');
return (0);
}
