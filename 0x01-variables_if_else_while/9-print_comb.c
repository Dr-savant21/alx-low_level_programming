#include <stdio.h>
/**
 * main - Entry point
 * author: Dr-savantcode
 * Return: 0 (success)
 */
int main(void)
{
	int alphaNums;

	for (alphaNums = 48; alphaNums < 58; alphaNums++)
	{
		putchar(alphaNums);
		if (alphaNums != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
