#include "main.h"
/**
 * print_last digi: it will print last digit of a number
 *
 * @n: it store an integer value
 *
 * Return: o for success
*/
int print_last_digit(int n)
{
	int i;
	i = n % 10;
	if (i < 0)
	{
		_putchar(-i + 48 );
		return (i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
