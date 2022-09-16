#include "main.h"
/**
 * print_numbers - print 0 to 9
 * Return: 0 success
*/
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
