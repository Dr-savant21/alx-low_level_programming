#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: a pointer
 * @c: a string
 * Return: 0 on success
 */
char *_strchr(char *s, char c)
{
	char *s1 = s - 1;

	do {
		s1++;
		if (*s1 == c)
			return (s1);
	} while (*s1 != '\0');
	return (0);
}
