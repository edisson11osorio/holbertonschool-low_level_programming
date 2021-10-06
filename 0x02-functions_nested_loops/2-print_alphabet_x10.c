#include "main.h"
/**
 * print_alphabet_x10 - print 10 times
 * print 10 times
*/
void print_alphabet_x10(void)
{
int num = 0;
char caracter;
while (num++ <=9)
{
for (caracter = 'a'; caracter <= 'z'; caracter++)
_putchar(caracter);
_putchar('\n');    
}    
}
