#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line.
 * @separator: seperates strings
 * @n: number of strings passed to the function
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *strp;
	unsigned int x;
	va_list ab;

	va_start(ab, n);

	if (separator == NULL)
	       separator = "";
	for (x = 0; x < n; x = x + 1)
	{
		strp = va_arg(ab, char*);
	if (strp == NULL)
	strp = "(nil)";
	printf("%s", strp);

	if (x < n - 1)
	printf("%s", separator);
	}
	printf("\n");
	va_end(ab);
}
