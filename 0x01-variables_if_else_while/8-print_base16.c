#include <stdio.h>
/**
 * main - Entry point
 * author: Dr-savantcode
 * Return: 0 (success)
 */
int main(void)
{
	int numb;
	char alpha;

	for (numb = 48; numb < 58; numb++)
		putchar(numb);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
