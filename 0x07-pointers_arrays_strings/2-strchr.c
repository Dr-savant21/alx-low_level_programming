#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: a pointer
 * @c: a string
 * Return: 0 on success
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
