#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - pirnts the addition of positive numbers
 * @argc: counts argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; argc < 1; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
