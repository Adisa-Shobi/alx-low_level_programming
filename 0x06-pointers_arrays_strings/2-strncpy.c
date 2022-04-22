#include "main.h"
#include "../0x05-pointers_arrays_strings/2-strlen.c"

/**
 *_strncpy - copies the dtring src points to into dest without exceeding n bytes
 *
 *@dest: The pointer to dest
 *@src: Pointer to src
 *Return: the destination pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for (; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
