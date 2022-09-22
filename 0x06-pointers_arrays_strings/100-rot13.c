#include "main.h"
/**
 * rot13 - encode a string using rot13
 * @s: the string to be encoded
 * author: Dr-savantcode
 * Return: A pointer to the encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; i++)
		{
			if (s[i] == a[j])
			{
				s[i] = r[j];
				break;
			}
		}
	}
	return (s);
}
