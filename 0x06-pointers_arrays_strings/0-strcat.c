#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: string to copy from
 * @dest: string to append
 * Description: appemd src to end of dest
 * Return: pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int x;
	int len1 = 0;
	int len2 = 0;

	while (dest[i] != '\0')
	{
		len1++;
		i++;
	}
	while (src[j] != '\0')
	{
		len2++;
		j++;
	}
	for (x = 0; x <= len2; x++)
	{
		dest[len1 + x] = src[x];
	}
	return (dest);
}
