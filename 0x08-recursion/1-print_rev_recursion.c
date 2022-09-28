#include "main.h"
/**
 * _print_rev_recursion - string in reverse oder
 * @s: a string to be reverse
 * Description: print a string in reverse
 * Return: 0 success
*/
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
		return;
	if (s[1] != '\0')
	{
		_print_rev_recursion(&s[1]);
		_putchar(s[0]);
	}
	else
	{
		_putchar(s[0]);
	}
}
