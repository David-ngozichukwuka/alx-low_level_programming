#include "variadic_functions.h"
/**
 * print_all - outputs all specified arguments
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int x;
	int flag;
	char *strp;
	va_list a_list;

	va_start(a_list, format);
	x = 0;
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				flag = 0;
				break;
			case 's':
				strp = va_arg(a_list, char*);
				if (strp == NULL)
					strp = "(nil)";
				printf("%s", strp);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[x + 1] != '\0' && flag == 0)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(a_list);
}