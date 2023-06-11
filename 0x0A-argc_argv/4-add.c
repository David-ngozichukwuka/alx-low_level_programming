#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/**
 * check_num - checks if string there are digits
 * @str: array string
 *
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int a;

	a = 0;
	while (a < strlen(str))
	{
		if (!isdigit(str[a]))
			return (0);
		a++;
	}
	return (1);
}

/**
 * main - outputs the name of the program
 * @argc: Count of arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;
	int str_to_int;
	int add = 0;

	a = 1;
	while (a < argc)
	{
		if (check_num(argv[a]))
		{
			str_to_int = atoi(argv[a]);
			add += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		a++;
	}
	printf("%d\n", add);
	return (0);
}
