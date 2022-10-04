#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: stinrg to copy
 * @src: another string to copy
 * @n: an integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
