#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * * print_strings - Prints strings, followed by a new line.
 * * @separator: The string to be printed between strings.
 * * @n: The number of strings passed to the function.
 * * @...: A variable number of strings to be printed.
 * *
 * * Description: If separator is NULL, it is not printed.
 * *              If one of the strings if NULL, (nil) is printed instead.
 * */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *sr;
	unsigned int b;

	va_start(strings, n);

	for (b = 0; b < n; b++)
	{
	sr = va_arg(strings, char *);
	if (sr == NULL)
	printf("(nil)");
	else
	printf("%s", sr);

	if (b != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
