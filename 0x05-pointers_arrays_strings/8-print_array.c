#include "main.h"
#include <stdio.h>

/**
 *print_array - Prints the first n integers in an array
 *@a: array of integers
 *@n: Number of integers to print
 *Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", *(a + i));
		if (i < (n - 1))
			printf(", ");
		else
			printf("\n");
	}
	printf("\n");
}
