#include "main.h"
/**
 * _puts - prints string
 *
 * @str: input strio print
 * Description: print string to the stdout
 * Return: 0 succescc
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
