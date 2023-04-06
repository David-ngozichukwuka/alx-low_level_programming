#include "main.h"

/**
 * inspectpr - checks for prime numbers
 * @num1: int
 * @num2: int
 *
 * Return: int
 */
int inspectpr(int num1, int num2)
{
	if (num2 < 2 || num2 % num1 == 0)
	return (0);
	else if (num1 > num2 / 2)
	{
	return (1);
	}
	else
	return (inspectpr(num1 + 1, num2));
}

/**
 * is_prime_number - discloses a prime number
 * @n: int
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
	return (1);
	return (inspectpr(2, n));
}
