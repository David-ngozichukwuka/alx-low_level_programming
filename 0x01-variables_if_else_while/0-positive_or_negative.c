#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Displays any code placed within its curly braces
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is postive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is nrgative\n", n);
	}
	return (0);
}
