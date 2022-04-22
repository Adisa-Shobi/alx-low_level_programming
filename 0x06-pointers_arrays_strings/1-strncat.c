#include "main.h"
#include "../0x05-pointers_arrays_strings/2-strlen.c"

/**
 *_strncat - Concatenates two strings without exceeding n bytes
 *@n: max bytes
 *@dest: String being added to
 *@src: String being added from
 *Return: An array of chars (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, max, len_src, i;

	len_dest = _strlen(dest);
	len_src = _strlen(src);
	if (len_src - 1 > n)
		max = n - 1;
	else
		max = len_src -1;
	for (i = 0 ; i <= max ; i++)
		dest[len_dest + i] = src[i];
	dest[(len_dest + i)] = '\0';
	return (dest);
}
