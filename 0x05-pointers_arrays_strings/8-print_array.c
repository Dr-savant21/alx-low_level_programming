#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: an integer
 * @n: another integer
 * author:Dr-savantcode
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
			printf(", ");
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
