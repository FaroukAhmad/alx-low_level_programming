#include "main.h"
/**
 * *_strcpy - copy string src to bupper pointed to by dest
 * @dest: string pointer
 * @src: buffer  pointer
 * Description: copies string src to buffer
 * Return: 0 success
*/
char  *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			return (dest);
		i++;
	}
	return (dest);
}
