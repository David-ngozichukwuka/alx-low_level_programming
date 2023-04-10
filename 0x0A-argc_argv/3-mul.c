#include <stdio.h>
#include <stdlib.h>
/**
 * main - outputs the product of two numbers
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}

	b = atoi(argv[2]);
	a = atoi(argv[1]);
	printf("%d\n", a * b);

	return (0);
}


