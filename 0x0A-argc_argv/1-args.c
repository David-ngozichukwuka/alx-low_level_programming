#include <stdio.h>
#include "main.h"

/**
 * main - outputs the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: argument vectors
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
