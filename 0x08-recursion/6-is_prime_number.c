#include "main.h"
/**
 * calc_prime - returns the factorial of a given number.
 * @n: input value.
 * @y: number calc.
 * Return: 0
 */
int calc_prime(int n, int y)
{
	if ((y * y) == n || n < 0)
		return (0);
	else if ((y * y) > n)
		return (1);
	return (calc_prime(n, (y + 1)));
}


/**
 * is_prime_number - returns the factorial of a given number.
 * @n: input value.
 * Return: return 0
 */
int is_prime_number(int n)
{
	return (calc_prime(n, 0));
}
