#include "main.h"
/**
 * rev_string - reverse a string
 * @s: a string to be reversed
 * Description: reverse a string to stdout
 * Return: 0 success
*/
void rev_string(char *s)
{
	int i = 0;

	int j = 0;

	char temp[1000];

	while (s[i] != '\0')
	{
		i++;
	}
	for (; i > 0; i--)
	{
		temp[j] = s[i - 1];
		j++;
	}
	while (i < j)
	{
		s[i] = temp[i];
		i++;
	}
}
