#include "main.h"
/**
 * _puts_recursion - outputs a string
 * @s:a string
 *
 * Return: Void 
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}	
