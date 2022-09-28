#include "main.h"
/**
 * factorial - function to return factorial of a number
 * @n: the number
 * Return: Always 0 on success
 */
int factorial(int n)
{
	if (n == 1)
		return (0);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
