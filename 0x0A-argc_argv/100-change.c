#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *@argc: Argument count
 *@argv: Array of arguments
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", min_change(atoi(argv[1]), 0));
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}

/**
 *min_change - finds the minimun amount of change for an amnt
 *@n: integer Amount
 *@c: integer change
 *Return: Minimum change
 */
int min_change(int n, int c)
{
	if (n <= 0)
		return (c);
	else if (n >= 25)
		return (min_change(n % 25, c += (n / 25)));
	else if (n >= 10)
		return (min_change(n % 10, c += (n / 10)));
	else if (n >= 5)
		return (min_change(n % 5, c += (n / 5)));
	else if (n >= 2)
		return (min_change(n % 2, c += (n / 2)));
	else
		return (min_change(n % 1, c += (n / 1)));
}
