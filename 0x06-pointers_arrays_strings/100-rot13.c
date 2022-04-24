#include "main.h"

/**
 *rot13 - Rotates the alphabet by 13 places
 *
 *@a: Strings
 *Return: An array of characters
 */
char *rot13(char *a)
{
	int i, j;

	char k[53] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char c[53] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	i = 0;
	while (a[i] != '\0')
	{
		j = 0;
		while (k[j] != '\0')
		{
			if (a[i] == k[j])
				a[i] = c[j];
			j++;
		}
		i++;
	}
	return (a);
}
