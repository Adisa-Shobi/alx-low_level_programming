#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *main - entry point to program that multiplies two numbers
 *@argc: Argument count
 *@argv: Array of arguments
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
