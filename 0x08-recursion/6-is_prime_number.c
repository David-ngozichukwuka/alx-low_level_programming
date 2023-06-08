#include "main.h"
/**
 * isTrue - checks for prime numbers
 * @y: integer
 * @x: integer
 * Return: integer
 */
int isTrue(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (isTrue(x + 1, y));
}

/**
 * is_prime_number - confirms a prime number
 * @n: integer
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (isTrue(2, n));
}
