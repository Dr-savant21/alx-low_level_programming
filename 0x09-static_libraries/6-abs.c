#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @c: is tge int that we will use dor he argument of the function
 * author: Dr-savantcode
 * Return: 0 on success
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
