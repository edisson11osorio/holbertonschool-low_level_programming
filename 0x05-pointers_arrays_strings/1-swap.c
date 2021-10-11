#include "main.h"
/**
 * swap_int - swap values
 * @a : pointer value
 * @b : pointer value
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
