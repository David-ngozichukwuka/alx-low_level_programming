#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - outputs anything
 * @format: list the types of arguments passed to the function
 */
void print_all(const char* const format, ...)
{
		int z = 0;
		char *str;
		char *sept = "";

		va_list list;

		va_start(list, format);

		if (format)
		{
			while (format[z])
			{
				switch (format[z])
				{
					case 'c':
						printf("%s%c", sept, va_arg(list, int));
							break;
					case 'i':
						printf("%s%d", sept, va_arg(list, int));
							break;
					case 'f':
						printf("%s%f", sept, va_arg(list, double));
							break;
					case 's':
						str = va_arg(list, char *);
						if (!str)
							str = "(nil)";
						printf("%s%s", sept, str);
						break;
					default:
						z++;
						continue;
				}
				sept = ", ";
				z = z + 1;
			}
		}
		printf("\n");
		va_end(list);
}
