#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *main - entry point to program that multiplies positive numbers
 *
 *Return: 0 if success
 */
int main(int argc, char** argv)
{
	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (all_digits(argv[1]) && all_digits(argv[2]))
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

/**
 *all_digits - checks an array to make sure all characters are digits
 *
 *@n: the array to be checked
 *Return: 0 if not all digits, and 1 if all digits
 */
int all_digits(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (!isdigit(n[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
