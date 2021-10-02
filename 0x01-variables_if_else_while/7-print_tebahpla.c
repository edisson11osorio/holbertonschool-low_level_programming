#include <stdio.h>
/**
 * main - print last digit
 *
 * Return: 0
*/

int main(void)
{
int caracter = 122;
while (caracter >= 97)
{
putchar(caracter);
caracter--;
}
putchar('\n');
return (0);
}
