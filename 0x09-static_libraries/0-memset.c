#include "main.h"
/**
 * _memset - functionthat fills memory byte
 * @s: a pointer to a string
 * @b: a string
 * @n: an unsigned integer
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
