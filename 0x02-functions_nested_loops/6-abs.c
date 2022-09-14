#include "main.h"
/**
 * _abs- compute the absolute value of an integer
 *
 * @n: a variable that stores integer value
 *
 * Return: o for success
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
