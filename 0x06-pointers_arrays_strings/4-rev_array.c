#include "main.h"

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

/**
 *_strlen - returns the length of a string
 *
 *@s: string
 *Return: int(lenght of s)
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n++;
	return (n);
}
