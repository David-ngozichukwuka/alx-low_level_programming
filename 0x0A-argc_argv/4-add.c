#include <stdio.h>
#include <stdlib.h>
/**
 * main - sums positive numbers
 * @argc: argument count
 * @argv: arguments array of strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int r, s;
	int add = 0;
	char *spot;

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}

	for (r = 1; argv[r]; r++)
	{
	s = strtol(argv[r], &spot, 10);
	if (*spot)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
	add += s;
	}
	}
	printf("%d\n", add);
	return (0);
}
