#include "main.h"
/**
 * print_line - that draws straight line
 * @n: integer amount of _
 * Return: 0 success
*/
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
