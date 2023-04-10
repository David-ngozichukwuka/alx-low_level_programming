#include <stdio.h>
#include "main.h"
/**
 * main - displays the number of arguments passed
 * @argc: argument count
 * @argv: array of string arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
