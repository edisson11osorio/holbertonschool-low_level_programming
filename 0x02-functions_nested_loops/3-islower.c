#include "main.h"
/**
 * _islower - print
 * @c: charter checked
 * Return: 1 is character is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
