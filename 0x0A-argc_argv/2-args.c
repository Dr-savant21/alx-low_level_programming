#include <stdio.h>
#include "main.h"
/**
 * main - program that prints all arguments it receives
 * @argc: count argument
 * @argv: argument
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	/* declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/* while statement - print each argument*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
