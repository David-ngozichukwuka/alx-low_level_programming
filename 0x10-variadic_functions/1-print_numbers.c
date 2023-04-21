#include "variadic_functions.h"
/**
 * print_numbers - outputs numbers
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ab;
	unsigned int x;

	va_start(ab, n);

	if (separator == NULL)
		separator = "";
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ab, int));
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ab);
}

