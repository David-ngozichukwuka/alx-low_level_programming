#include "main.h"
/**
 *  _strlen_recursion - outputs the length of a string
 *  @s: sample string
 *
 *  Return: Integer data type
 */
int _strlen_recursion(char *s)
{
	int k;

	k = 0;

	if (*s)
	{
	k = k + 1;
	k += _strlen_recursion(s + 1);
	}
	return (k);
}
