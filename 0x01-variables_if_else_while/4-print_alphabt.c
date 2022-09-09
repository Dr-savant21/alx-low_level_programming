#include <stdio.h>

/**
 * main - Entry point
 *
 * Author: Dr-savantcode
 * Return: Always 0 (success)
 */
int main(void)
{
	char code;

	for (code = 'a'; code <= 'z'; code++)
	{
		if (code != 'q' && code != 'e')
		{
			putchar(code);
		}
	}

	putchar('\n');
	return (0);
}
