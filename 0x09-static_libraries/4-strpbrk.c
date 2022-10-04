#include "main.h"
/**
 * _strpbrk - searchec for string for any of a set of bytes
 * @s: a pointer
 * @accept: another pointer to a string
 * Return:  a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 * author: Dr-savantcode
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(accept + b) == *(s + a))
			{
				return (s + a);
			}
		}
	}
	return ('\0');
}
