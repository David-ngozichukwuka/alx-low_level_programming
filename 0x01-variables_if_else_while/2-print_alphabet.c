#include <stdio.h>

/**
*main - Function that executes lines of code written within its curly braces
*
*Return: always 0
*/
int main(void)
{
int i;
char letter;
letter = 'a';

for (i = 0; i < 26; i++)
putchar(letter + i);
putchar('\n');
return (0);
}
