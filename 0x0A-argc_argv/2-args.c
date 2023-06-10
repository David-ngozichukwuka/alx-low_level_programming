#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments received
 * @argc: number of arguments
 * @argv: argument vectors
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
	printf("%s\n", argv[p]);
	}
	return (0);
}
