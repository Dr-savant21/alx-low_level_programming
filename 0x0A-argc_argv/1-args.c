#include <stdio.h>
#include "main.h"
/**
 * main - print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
