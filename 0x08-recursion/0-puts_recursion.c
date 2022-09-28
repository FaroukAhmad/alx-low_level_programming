#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: a string to be print out
 * Description: print string using recursion
 * Return: string
*/
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
	else
		_putchar('\n');
}
