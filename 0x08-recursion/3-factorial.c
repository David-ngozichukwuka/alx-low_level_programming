#include "main.h"
/**
 * factorial - prints the product of an integer with every whole number less than or equal to the it until one.
 * @n: integer
 *
 * Return: int
 */
int factorial(int n)
{
	int r;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)

	{
	return (1);
	}
	else
	{
		r = n * factorial(n - 1);
	}
	return (r);

}

