#include "main.h"

/**
 * _isdigit - These functions check if c, which must have the indicated value
 * @c - check the numbers from 0 to 9
 * Description: This program will determine digits 0 to 9
 * Return: 1 if uppercase, 0 otherwise
*/

int _isdigit(int c)
{
    if ((c >= '0') && (c <= '9'))
        return (1);
    else
        return (0);
}
