#include "main.h"
/**
 * help - helps prime function
 * @n: the integer
 * @x: check if n is divsible by x
 * Return: 0 if not prime, 1 is prime
 */
int help(int n, int x)
{
	if (x > 9)
		return (1);
	else if (n % x != 0)
		return (help(n, ++x));
	return (0);
}
/**
 * is_prime_number - function t check for prime number
 * @n: the integer
 * Return: 1 on success
 */
int is_prime_number(int n)
{
	if (n == 1 || n == -1 || n == 0)
		return (0);
	return (help(n, 2));
}
