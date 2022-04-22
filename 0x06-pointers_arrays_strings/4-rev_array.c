#include "main.h"
#include "../0x05-pointers_arrays_strings/2-strlen.c"

/**
 *reverse_array - reverses an array of integers
 *
 *@n: Number of elements in a array
 *@a: Array of integers
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i, p, half, len;

	len = n - 1;
	half = len / 2;
	for (i = 0; i <= half ; i++)
	{
		p = a[i];
		a[i] = a[len - i];
		a[len - i] = p;
	}
}
