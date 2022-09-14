#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: the number to be passed as argument
 * author:Dr-savantcode
 * Return: 0 on success
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
