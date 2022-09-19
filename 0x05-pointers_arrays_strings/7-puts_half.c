#include "main.h"
/**
 * puts_half - writes half of a charcter string
 * @str: input string to print
 * Description: print the half charcter of string
 * Return: 0 success
*/
void puts_half(char *str)
{
	int i, j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
		j = i / 2;
		if (i % 2 == 0)
		{
			j++;
		}
	}
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
