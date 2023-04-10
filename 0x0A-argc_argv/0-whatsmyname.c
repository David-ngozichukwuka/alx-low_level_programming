#include <stdio.h>
#include "main.h"
/**
 * main - outputs the name of the program
 * @argc: argument count
 * @argv: array of string arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
