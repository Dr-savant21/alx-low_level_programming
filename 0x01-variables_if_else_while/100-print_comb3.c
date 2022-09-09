#include <stdio.h>
/**
 * main - program compilations begin from main
 * description: program to print all possible combinations of numbers
 * with no two numbers same in pairing
 * author: Dr-savantcode
 * Return: 0 means success
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (a != b && b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
