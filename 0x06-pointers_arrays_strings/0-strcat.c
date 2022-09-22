#include "main.h"
/**
 * _strcat - function to concentrate string
 * @dest: a pointer to a character that will be changed
 * @src: a pointer to another character that will also be changed
 * author: Dr-savantcode
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
