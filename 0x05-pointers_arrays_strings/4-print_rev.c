#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string to reverse
 * Description: prints string in reverse to stdout
 * Return: 0 success
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
