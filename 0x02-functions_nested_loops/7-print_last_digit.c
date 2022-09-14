#include "main.h"
/**
 * print_last_digit - will print the last digit of a number
 *
 * @n: it stores an integer value
 *
 * Return: 0 for success
*/
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
