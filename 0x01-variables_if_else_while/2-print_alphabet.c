#include <stdio.h>

/**
 *main-Entry point
 *Return:Always 0(success/correct)
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}