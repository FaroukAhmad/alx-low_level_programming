#include <stdio.h>
/**
 * main - Entry point
 *
 * return: Always 0 (succes)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'e' && ch != 'q')
		putchar(ch);
	}
		putchar('\n');

	return (0);
}
