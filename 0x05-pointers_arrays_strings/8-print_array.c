#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an elements of array
 * @n: number of array
 * @a: elements of array
 * Description: prints n elements of an array
 * Return: 0 success
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
