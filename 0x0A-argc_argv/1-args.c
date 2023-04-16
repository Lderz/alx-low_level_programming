#include <stdio.h>

/**
 * main - shows the number of arg passed into it
 * @argc: The num. of command lines arg.
 * @argv: array
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int a = argc - 1;

	printf("%d \n", a);
	return (0);
}
