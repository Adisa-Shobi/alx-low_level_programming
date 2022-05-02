#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 *main - entry point to program that sums numbers
 *@argc: Argument count
 *@argv: Array of arguments
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	while (i < argc)
	{
		if (is_num(argv[i]) == 1)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

/**
 *is_num - chaeck if a string contains any characters that are not digits
 *@s: string
 *
 *Return: 1 if number, 0 if not number
 */
int is_num(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
