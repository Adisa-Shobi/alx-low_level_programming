#include "main.h"

/**
 *swap_int - swaps the values of two pointers
 *@a: First pointer
 *@b: Second pointer
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int p;
	p = *a;
	*a = *b;
	*b = p;
}
