#include "main.h"
#include <stdio.h>

/**
 *main - entry point to program that prints number of args passed to it
 *@argc: Argument count
 *@argv: Array of arguments
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
