#include "main.h"
/**
 * True - checks for the square root
 * @y: integer
 * @x: integer
 *
 * Return: integer
 */
int True(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (True(x + 1, y));
}

/**
 * _sqrt_recursion - outputs the natural square root of a value
 * @n: integer for square to be found
 *
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (True(1, n));
}
