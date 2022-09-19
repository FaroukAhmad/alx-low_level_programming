#include "main.h"
/**
 * _stren - return the length of the string
 *
 * @s: input string to count
 * Description: returns the length of a given string
 * Return: length of string as int
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
