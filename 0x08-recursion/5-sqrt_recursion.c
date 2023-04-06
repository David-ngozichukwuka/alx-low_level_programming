#include "main.h"
/**
 * inspectsqr - probes for the square root
 * @num1: int
 * @num2: int
 *
 * Return: int
 */
int inspectsqr(int num1, int num2)
{
	if (num1 * num1 == num2)
	return (num1);
	if (num1 * num1 > num2)
	return (-1);
	return (inspectsqr(num1 + 1, num2));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to check square root of
 *
 * Return:natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	return (0);
	return (inspectsqr(1, n));
}
