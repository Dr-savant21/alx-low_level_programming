#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0-14.
 * author: Dr-savantcode
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
		{
		if (j > 9)
		{
			_putchar('0' + j / 10);
		}
		else
		{
			_putchar('0' + j % 10);
		}
		j++;
		}
		_putchar('\n');
		i++;
	}
}
