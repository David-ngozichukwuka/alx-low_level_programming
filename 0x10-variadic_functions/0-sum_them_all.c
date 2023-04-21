#include "variadic_functions.h"
/**
 * sum_them_all - sums all the numbers
 * @n: total number of parameters passed
 *
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum;
	va_list ab;

	va_start(ab, n);

	if (n == 0)
		return (0);
	for (x = 0; x < n; x++)
		sum += va_arg(ab, int);
	va_end(ab);

	return (sum);
}
