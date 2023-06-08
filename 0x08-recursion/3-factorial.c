#include "main.h"
/**
 * factorial - integer factorial
 * @n: integer
 * Return: integer
 */
int factorial(int n)
{
	int result;

	if (n == 0)
	return (1);

	else if (n > 0)
	result = n * factorial(n - 1);

	else if (n < 0)
	{
	return (-1);
	}
	return (result);
}
