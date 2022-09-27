#include "main.h"
/**
 * _memset - fill memory with constant byste
 * @s: a pointer to a memory area
 * @b: a byte to write to memory
 * @n: the number of byte to write
 * Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		s[i] = b;
	return (s);
}
