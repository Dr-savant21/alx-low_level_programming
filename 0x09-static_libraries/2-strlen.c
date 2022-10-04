#include "main.h"

/**
 * _strlen - takes a pointer to get the length of a string
 * @s: a char of unknown string length
 * author: Dr-savantcode
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
