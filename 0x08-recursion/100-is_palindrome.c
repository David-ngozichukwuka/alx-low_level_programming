#include "main.h"
/**
 * _strlen_recursion - outputs a string's length
 * @s: the string
 *
 * Return: the string length
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * palin_isTrue - checks if a string is empty
 * @str: string
 * @x: left indexation
 * @y: right indexation
 *
 * Return: 1 if string is a palindrome and 0 if it is not
 */
int palin_isTrue(char *str, int a, int b)
{
	if (str[x] == str[y])
		if (a > b / 2)
			return (1);
		else
			return (palin_isTrue(str, a + 1, b - 1));
	esle
		return (0);
}

/**
 * is_palindrome - checks if a is a palindrome
 * @s: pointer to base string address
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_palindrome(char *s)
{
	return (palin_isTrue(s, 0, _strlen_recursion(s) - 1));
}
