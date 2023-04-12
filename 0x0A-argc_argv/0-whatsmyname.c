#include <stdio.h>

/**
 * main -  display name
 *@argc: num. of argument.
 *@argv: char. (array)
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a <= argc ; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}

