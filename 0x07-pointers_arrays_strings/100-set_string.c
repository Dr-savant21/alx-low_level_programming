#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char
 * @s: a pointer to source address
 * @to: a pointer to target address
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
