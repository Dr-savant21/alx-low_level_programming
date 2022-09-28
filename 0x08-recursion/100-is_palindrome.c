#include "main.h"
/**
 * get_length - get lengths of strings
 * @str: pinter to a string
 * @len: length of a string
 * Return: length of string
 */
int get_length(char *str, int len)
{
	if (*(str + len) != '\0')
		return (get_length(str, ++len));
	return (--len);
}
/**
 * check_pali - checks if string is pallindrome
 * @f: pointer to string
 * @r: pointer to secong string
 * @len: length of string
 * Return: 0
 */
int check_pali(char *f, char *r, int len)
{
	if (*f == *(r + len) && len > 1)
	{
		f++;
		return (check_pali(f, r, --len));
	}
	if (len == 1)
	{
		return (1);
	}
	return (0);
}
/**
 * is_palindrome - a palindrome string
 * @s: pointer to string
 * Return: recursion
 */
int is_palindrome(char *s)
{
	return (check_pali(s, s, get_length(s, 0)));
}
