#include "main.h"
#include <stdio.h>

/**
 *main - Entry point to program that prints all ints command line arguments
 *@argc: Argument count
 *@argv: Array of arguments
 *Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
