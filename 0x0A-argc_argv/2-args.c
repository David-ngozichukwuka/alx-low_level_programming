#include <stdio.h>
#include "main.h"
/**
 * main - outputs any argument it receives
 * @argc: argument counts
 * @argv: argument string arrays
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int r;

	for (r = 0; r < argc; r = r + 1)
	{
	printf("%s\n", argv[r]);
	}
	return (0);
}
