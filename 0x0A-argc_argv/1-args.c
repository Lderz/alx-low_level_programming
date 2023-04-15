#include <stdio.h>

/**
 * main - shows the number of arg passed into it
 * @argc: The num. of command lines arg.
 * @argv: array 
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a;

	if (argc == 1)
		printf("%d \n", argc - 1);
	else
	{
		for (a = 0; *argv; a++, argv++)
			;

		printf("%d \n", a - 1);
	}

	return (0);
}

